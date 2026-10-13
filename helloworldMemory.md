In your C++ program, the object `hello` is typically allocated on the stack, while the class definition itself does not allocate memory for an object on the heap. Let's examine how memory is used during execution.

## 1. Your program

```
#include <iostream>
using namespace std;

class HelloWorld {
public:
    void printMessage() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    HelloWorld hello;
    hello.printMessage();
    return 0;
}
```

## 2. Stack and heap memory layout

### Stack — `main()`

Automatic storage duration

`hello`

A local `HelloWorld` object. Since the class has no non-static data members, it typically occupies 1 byte.

The object is destroyed automatically when `main()` exits.

### Heap — Dynamic storage

No heap allocation in this program.

There is no `new`, `malloc()`, or other explicit dynamic allocation for a `HelloWorld` object.

### Program code / executable memory

The compiled machine instructions for `main()` and `HelloWorld::printMessage()` are typically stored in the executable's code section when loaded. They are not copied into each object.

Note: Stack and heap are common implementation models. The C++ standard specifies storage duration and object lifetime rather than requiring a literal stack/heap layout.

## 3. What happens step by step?

1. Class declaration

   `cpp     class HelloWorld {     public:         void printMessage() {             cout << "Hello, World!" << endl;         }     };     `

   This defines a type. It does not create a `HelloWorld` object or allocate heap memory. The member function's compiled instructions are shared by objects of this class.
2. Entering `main()`

   `cpp     int main() {     `

   The execution environment establishes what is needed to execute `main()`. A typical implementation uses a stack frame.
3. Creating the object

   `cpp     HelloWorld hello;     `

   An automatic-storage-duration object named `hello` is created. Typically, its storage is within `main()`'s stack frame. Because the class has no data members, it contains no user-defined instance data.
4. Calling the member function

   `cpp     hello.printMessage();     `

   The function executes and prints `Hello, World!`. Conceptually, a non-static member function operates on the object through an implicit `this` pointer. In a typical implementation, the address of `hello` is passed to the function, although the compiler may optimise this away.
5. Returning from `main()`

   `cpp     return 0;     `

   The lifetime of `hello` ends. Its storage is released automatically; no `delete` is needed.

## 4. What if you declare variables and references in different scopes?

Consider this example:

```
int main() {
    int x = 10;        // Local variable
    int& ref = x;      // Reference to x

    {
        int y = 20;    // Inner-scope local variable
        int& r = y;    // Reference to y
    }                  // y's lifetime ends here

    int* ptr = new int(30); // Dynamically allocated integer
    delete ptr;

    return 0;
}
```

A typical memory representation while execution is inside the inner scope is:

### Illustrative memory view

Automatic storage (typically stack)

`x = 10`

`ref` refers to `x`

`y = 20`

`r` refers to `y`

`y` and `r` have inner-block scope. A reference is an alias, not a separate integer object.

Dynamic storage (typically heap)

`*ptr = 30`

The integer created by `new int(30)` occupies dynamically allocated storage. The local pointer variable `ptr` itself has automatic storage duration.

### Important distinctions

| Declaration               | What it means                                                                             |
| ------------------------- | ----------------------------------------------------------------------------------------- |
| `int x = 10;`             | Creates an integer with automatic storage duration in this local scope.                   |
| `int& ref = x;`           | Creates a reference alias to `x`; it does not create another integer.                     |
| `int* ptr = &x;`          | Creates a pointer variable holding the address of `x`.                                    |
| `int* ptr = new int(30);` | The pointer is local, but the dynamically allocated integer has dynamic storage duration. |
| `{ int y = 20; }`         | `y`'s lifetime ends when execution leaves the block.                                      |
| `static int count = 0;`   | Has static storage duration, even when declared inside a function.                        |

A key point about references: The C++ language does not require a reference to occupy a separate memory location. A compiler may implement it using an address, optimise it away, or otherwise avoid allocating separate storage. You should reason about a reference primarily as an alias to an existing object.

## 5. Try this experiment

Compile this program to observe the addresses of the objects and pointer:

```
#include <iostream>
using namespace std;

class HelloWorld {
public:
    void printMessage() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    HelloWorld hello;
    int x = 10;
    int& ref = x;
    int* ptr = new int(30);

    cout << "hello: " << &hello << '\n';
    cout << "x:     " << &x << '\n';
    cout << "ref:   " << &ref << '\n';
    cout << "ptr:   " << &ptr << '\n';
    cout << "*ptr:  " << ptr << '\n';

    delete ptr;
}
```

Notice that `&ref` and `&x` print the same address because `ref` is an alias for `x`. The address of the pointer variable `ptr` differs conceptually from the address stored in `ptr`, which points to the dynamically allocated integer.

Addresses alone cannot reliably prove whether storage is on a stack or heap; that depends on the implementation and runtime environment.
