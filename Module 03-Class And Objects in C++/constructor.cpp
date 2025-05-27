#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {

        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim(50, 10, 3.75);
    // rahim.roll = 45;
    // rahim.cls = 10;
    // rahim.gpa = 3.75;

    Student karim(1, 10, 5.00);
    // karim.roll = 50;
    // karim.cls = 11;
    // karim.gpa = 3.85;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}