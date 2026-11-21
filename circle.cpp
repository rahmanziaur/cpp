// circles.cpp
// Circles as graphics objects

#include "msoftcon.h"  // For graphics functions

////////////////////////////////////////////////////////////////

class circle  // Graphics circle
{
protected:
    int xCo, yCo;       // Coordinates of center
    int radius;
    color fillcolor;    // Color
    fstyle fillstyle;   // Fill pattern

public:
    // Sets circle attributes
    void set(int x, int y, int r, color fc, fstyle fs)
    {
        xCo = x;
        yCo = y;
        radius = r;
        fillcolor = fc;
        fillstyle = fs;
    }

    // Draws the circle
    void draw()
    {
        set_color(fillcolor);       // Set color
        set_fill_style(fillstyle);  // Set fill style
        draw_circle(xCo, yCo, radius);
    }
};

////////////////////////////////////////////////////////////////

int main()
{
    init_graphics();  // Initialize graphics system

    // Create circle objects
    circle c1;
    circle c2;
    circle c3;

    // Set circle attributes
    c1.set(15, 7, 5, cBLUE, X_FILL);
    c2.set(41, 12, 7, cRED, O_FILL);
    c3.set(65, 18, 4, cGREEN, MEDIUM_FILL);

    // Draw circles
    c1.draw();
    c2.draw();
    c3.draw();

    set_cursor_pos(1, 25);  // Move cursor to lower-left corner

    return 0;
}
