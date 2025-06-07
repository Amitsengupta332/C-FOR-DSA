#include <bits/stdc++.h>
using namespace std;

class Rectangle
{

public: // Access specifier
    int l;
    int b;

    Rectangle() // Default constructor - no parameters
    {
        
        l = 0; // Initializing length to 1
        b = 0; // Initializing breadth to 1
    }
  
    Rectangle(int x, int y) // Parameterized constructor
    {
        l = x; // Initializing length with parameter x
        b = y; // Initializing breadth with parameter y
    }

    Rectangle(Rectangle &r) // Copy constructor
    {
        l = r.l; // Copying length from the passed object
        b = r.b; // Copying breadth from the passed object
    }
   
};

int main()
{
    Rectangle r1; // Object
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(10, 20); // Object with parameterized constructor
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3= r2; // Object with copy constructor
    cout << r3.l << " " << r3.b << endl;
    return 0;
}