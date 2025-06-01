#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {
        cout << "Hell0 From " << name << endl;
    }
};

int main()
{
    Student Sakib("Sakib Ahmed", 23);
     Sakib.hello();
    Student  Rifat("Rifat Ahmed", 24);
    // cout << Sakib.name << endl;
    // cout << Sakib.roll << endl;
   
    Rifat.hello();
    return 0;
}