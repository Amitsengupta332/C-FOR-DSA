#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    // cin.ignore(); // To ignore the newline character left in the input buffer
    getchar(); // To consume the newline character before reading the next line
    cin.getline(b.name, 100);
    cin >> b.roll >>b.gpa;
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa; Tamal Chakraborty 03 3.5

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    // a.roll = 10;
    // a.gpa = 3.5;
    // char temp[100] = "Amit";
    // strcpy(a.name, temp);

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}