

<iframe
  src="https://docs.google.com/gview?embedded=1&url=YOUR_PUBLIC_PDF_URL"
  width="100%"
  height="600"
  style="border: none;">
</iframe>


# Object‑Oriented Programming Lab — Course Completion Plan (OBE)

| | |
|---|---|
| **Course Title** | Object‑Oriented Programming Lab |
| **Session** | 2024‑2025 |
| **Semester** | Fall 2026 |
| **Credit Hour** | 1.5 |
| **Course Teacher** | Dr. Ziaur Rahman ([rahmanziaur.github.io](https://rahmanziaur.github.io/)) |
| **Class Schedule** | Saturday, 10:00 AM – 11:50 AM (weekly, single practice session) |
| **Total Sessions** | 15 |
---

## 0. Before the First Class — Setup Checklist

Complete all steps below **before** the first lab session. You will demonstrate your working setup in class and be awarded **5 marks**, added to your Lab Test score.

1. **Install Ubuntu (26.04.1 LTS)** on your system.
   [📺 How to Install VirtualBox on Windows 11 (2026)](https://www.youtube.com/watch?v=uvocM9joVfw)

2. **Install Microsoft VS Code** within your Ubuntu OS.
   [📺 How to Install and Use Visual Studio Code on Ubuntu 24.04/26.04 LTS](https://www.youtube.com/watch?v=NX8SHmkuLn4)

3. **Create a GitHub repository** named `studentid-name`, and add a README file to it.
   [📺 How to Create a GitHub Repository](https://www.youtube.com/watch?v=SgZhE40BvC4)

4. **Install GitHub Desktop** within your Ubuntu OS and log in with your GitHub credentials.
[📺 How to install a Desktop GitHub on Linux](https://linuxcapable.com/how-to-install-github-desktop-on-ubuntu-linux/)

6. **Write and run your first program.** Open VS Code in Ubuntu, copy-paste the program below, and run it. Once it works, push the file (`helloworld.cpp`) to your repository using Git from the terminal.

   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       cout << "Hello, World!" << endl;
       return 0;
   }
   ```

   [📺 How to Upload a Project to GitHub Using VS Code (2026)](https://www.youtube.com/watch?v=JB7YD7OKm5g)

> **Note:** In the first class, your GitHub repository will be checked directly on your Ubuntu machine. Make sure setup is complete beforehand.

---

## 1. Course Rationale

This lab complements the theory course in Object‑Oriented Programming and builds **hands‑on, industry‑relevant C++ programming skill** — not rote theory. Every session is structured as: *short concept demo → guided coding → independent lab test → take‑home reinforcement*, culminating in a live‑coded final project and a GitHub‑hosted portfolio.

---

## 2. Course Outcomes (CO) — Outcome Based Education

| CO No. | Course Outcome Statement | Bloom's Level | Skill Focus |
|---|---|---|---|
| **CO1** | Implement core object‑oriented building blocks in C++ (classes, objects, member functions, access control, static members) to write modular, well‑encapsulated code. | Apply (L3) | Foundational coding |
| **CO2** | Construct and manage object lifecycle correctly using constructors, destructors, overloading, and initialization techniques, including resource‑safe design. | Apply (L3) | Resource/lifecycle mgmt. |
| **CO3** | Analyze and design class hierarchies using inheritance, polymorphism, abstraction, and interfaces to solve multi‑class problems. | Analyze (L4) | OOP design |
| **CO4** | Design robust C++ programs employing file I/O, exception handling, dynamic memory, templates, and namespaces to handle real‑world data and errors safely. | Evaluate (L5) | Robust software engineering |
| **CO5** | Develop, document, and deliver a complete, working C++ application (including concurrency/networking concepts) as a version‑controlled, peer‑ and industry‑presentable project. | Create (L6) | Project delivery |

### CO – Program Outcome (PO) Mapping Matrix

| CO | PO1 (Eng. Knowledge) | PO2 (Problem Analysis) | PO3 (Design/Development) | PO5 (Modern Tool Usage) | PO9 (Individual & Team Work) | PO10 (Communication) | PO12 (Life‑long Learning) |
|---|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| CO1 | 3 | 2 | 1 | 2 | – | – | 1 |
| CO2 | 3 | 2 | 2 | 2 | – | – | 1 |
| CO3 | 2 | 3 | 3 | 2 | 1 | – | 1 |
| CO4 | 2 | 3 | 3 | 3 | 1 | 1 | 2 |
| CO5 | 1 | 2 | 3 | 3 | 3 | 3 | 3 |

*(Scale: 1 = Low, 2 = Moderate, 3 = High correlation)*

---

## 3. Weekly Lab Schedule (Topic → Date → CO Mapping)

| Wk | Date (Sat) | Topics Covered | Mapped CO | Deliverable |
|---|---|---|---|---|
| 1 | Sep 26, 2026 | Classes & Objects · Class Member Functions · Access Modifiers | CO1 | Lab Test 1 |
| 2 | Oct 3, 2026 | Static Class/Data Members · Static Member Functions | CO1 | Lab Test 2 |
| 3 | Oct 10, 2026 | Inline Functions · `this` Pointer · Friend Functions · Pointer to Classes | CO1 | Lab Test 3 |
| 4 | Oct 17, 2026 | Constructor & Destructor overview · Default Constructors · Parameterized Constructors | CO2 | Lab Test 4 |
| 5 | Oct 24, 2026 | Copy Constructor · Constructor Overloading · Default Arguments · Delegating Constructors | CO2 | Lab Test 5 |
| — | *Break* | *(mid‑semester gap)* | | |
| 6 | Nov 7, 2026 | Constructor Initialization List · Dynamic Initialization · Destructors · Virtual Destructor | CO2 | Lab Test 6 |
| 7 | Nov 14, 2026 | Inheritance · Multiple Inheritance · Multilevel Inheritance | CO3 | Lab Test 7 |
| 8 | Nov 21, 2026 | Operator Overloading · Polymorphism · Abstraction · Encapsulation | CO3 | Lab Test 8 |
| 9 | Nov 28, 2026 | Interfaces · Virtual Functions · Pure Virtual Functions/Abstract Classes · Override & Final Specifiers | CO3 | Lab Test 9 |
| 10 | Dec 5, 2026 | Files & Streams · Reading From File · Exception Handling | CO4 | Lab Test 10 |
| 11 | Dec 12, 2026 | Dynamic Memory · Move Semantics · Namespaces · Templates | CO4 | Lab Test 11 |
| 12 | Dec 19, 2026 | Preprocessor · Signal Handling · Multithreading (intro) | CO4/CO5 | Lab Test 12 + **Project Proposal Due** |
| — | *Break* | *(winter break)* | | |
| 13 | Jan 2, 2027 | Web Programming (intro) · Socket Programming · Concurrency | CO5 | Lab Test 13 |
| 14 | Jan 9, 2027 | **Project Build Lab** — mentored implementation, code review, Git workflow | CO5 | Lab Test 14 (progress check) |
| 15 | Jan 16, 2027 | **Project Presentation & Demo Day** — final submission, peer review, wrap‑up | CO5 | Lab Test 15 + Project Submission |
| — | Exam Week (TBD by dept.) | **Lab Final — Live Coding Project & Viva** | CO1–CO5 | Final Exam |

---

## 4. Assessment Distribution (Total = 100)

| Component | Marks | Frequency | CO(s) Assessed |
|---|:---:|---|---|
| Continuous Evaluation (Lab Tests / Codeforces Rating) | 15 | 15 tests, 1 mark each, best-effort average scaled to 15 | CO1–CO5 |
| Attendance | 10 | Every session | — |
| Quiz | 5 | 1–2 short quizzes during the term | CO1–CO3 |
| Final Project | 10 | Once, weeks 12–15 | CO5 |
| Lab Report (GitHub repo + README + handwritten scanned PDF) | 10 | Cumulative, submitted weekly/final | CO1–CO5 |
| Lab Final (Live Project Exam) | 40 | End of semester | CO1–CO5 |
| Viva | 10 | End of semester, with Lab Final | CO1–CO5 |
| **Total** | **100** | | |

---

## 5. Weekly Lab Test Format
Each 15–20 minute test (immediately after the session) contains:
- **1 short conceptual question** (5 marks worth, scaled) — verifies understanding of that day's topic.
- **1 hands‑on coding task** — write/complete/debug a short C++ program using the day's concept.
- Closed-book, IDE allowed, no internet except official cppreference.

---

## 6. Final Project (Course Project)
**Assigned:** Week 12 · **Presented:** Week 15

**Requirement:** Build a mid‑sized console (or simple client‑server) C++ application that demonstrably uses **at least 8 topics** from the course (must include inheritance, polymorphism, exception handling, file I/O, and one of: templates/threading/sockets).

**Examples:** Library Management System, Bank Account Simulator, Student Result Processor with file persistence, Simple Chat App using sockets, Inventory System with multithreaded stock updates.

**Submission:** GitHub repository (public or shared with instructor) containing source code, README, and a short demo video/screens.

---

## 7. Lab Report Requirements
Each student maintains a **GitHub repository** for the course containing:
1. One folder per week with source code (`.cpp`/`.h`) and a topic-specific `README.md` explaining the concept, code walkthrough, and sample output.
2. A master `README.md` (this style) summarizing weekly progress and linking to each week's folder.
3. A **handwritten, hand-scanned PDF** lab notebook (algorithm/flow, hand-traced code, output) uploaded weekly as `labnotes_weekX.pdf`.

---

## 8. Rubrics

### 8.1 Lab Test Rubric (per test, scaled to 1 mark)
| Level | Criteria | Score |
|---|---|:---:|
| Excellent | Correct concept answer + working, clean, compiles-first-try code | 1.0 |
| Good | Minor logical/syntax errors, concept mostly correct | 0.75 |
| Average | Partial code, concept partially understood | 0.5 |
| Poor | Non-functional code or no attempt | 0–0.25 |

### 8.2 Attendance Rubric (10 marks)
| Attendance % | Marks |
|---|:---:|
| ≥ 95% | 10 |
| 85–94% | 8 |
| 70–84% | 6 |
| 60–69% | 4 |
| < 60% | 0–2 |

### 8.3 Quiz Rubric (5 marks)
| Level | Criteria | Score |
|---|---|:---:|
| Excellent | All concepts correctly applied, no guesswork evident | 5 |
| Good | One minor error | 4 |
| Average | Multiple errors but core idea shown | 2–3 |
| Poor | Mostly incorrect/blank | 0–1 |

### 8.4 Lab Report Rubric (10 marks)
| Criteria | Excellent (9–10) | Good (7–8) | Average (5–6) | Poor (0–4) |
|---|---|---|---|---|
| GitHub organization | Clean, weekly-structured, meaningful commits | Mostly organized | Disorganized but present | Missing/near-empty repo |
| README quality | Clear explanation + sample I/O for every topic | Most topics explained | Sparse explanations | Little to no documentation |
| Handwritten scans | Legible, complete, matches code | Mostly complete | Partial | Missing |

### 8.5 Final Project Rubric (10 marks)
| Criteria | Weight | Excellent | Good | Average | Poor |
|---|:---:|---|---|---|---|
| Functionality | 4 | Fully working, handles edge cases | Works with minor bugs | Partially works | Non-functional |
| OOP Design Quality | 3 | Strong use of ≥8 concepts, clean class design | Good use of concepts | Minimal OOP use | Procedural style, misuses OOP |
| Code Quality & Documentation | 2 | Well-commented, consistent style | Reasonably clean | Poorly commented | Unreadable |
| Presentation/Demo | 1 | Confident, clear walkthrough | Adequate | Weak explanation | No demo |

### 8.6 Lab Final — Live Project Exam Rubric (40 marks)
| Criteria | Weight | Excellent | Good | Average | Poor |
|---|:---:|---|---|---|---|
| Problem Understanding | 5 | Fully grasps and scopes problem correctly | Minor gaps | Partial understanding | Misunderstands problem |
| Class Design (OOP correctness) | 10 | Appropriate classes, inheritance/polymorphism used correctly | Mostly correct design | Weak design, some misuse | No real OOP structure |
| Implementation Correctness | 10 | Compiles & runs correctly, handles inputs robustly | Minor bugs, mostly correct | Several bugs | Doesn't compile/run |
| Live Coding Skill & Debugging | 10 | Codes independently, debugs efficiently under time pressure | Needs occasional hints | Needs frequent guidance | Cannot proceed independently |
| Code Quality | 5 | Clean, modular, properly commented | Reasonably clean | Messy but functional | Unstructured/unreadable |

### 8.7 Viva Rubric (10 marks)
| Level | Criteria | Score |
|---|---|:---:|
| Excellent | Explains own code and OOP concepts fluently, answers follow-ups confidently | 9–10 |
| Good | Explains most of the code correctly | 7–8 |
| Average | Explains code with prompting, some conceptual gaps | 5–6 |
| Poor | Cannot explain own code/logic | 0–4 |

---

## 9. Academic Integrity
All code must be the student's own work. Plagiarized/AI-generated submissions without understanding will score **0** in the associated Lab Test/Report/Project and may be referred to the department per institutional policy.

---

*Prepared as an Outcome-Based Education (OBE) course completion plan for the OOP Lab, Fall 2026 (Session 2024‑2025), under Dr. Ziaur Rahman.*
