#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {

        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student karim(1, 10, 5.00);
    Student *p = &karim;
    return p; // This will cause a compilation error
}

int main()
{
    // Student rahim(50, 10, 3.75);
    Student* p = fun();
    // Student karim(1, 10, 5.00);

    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}