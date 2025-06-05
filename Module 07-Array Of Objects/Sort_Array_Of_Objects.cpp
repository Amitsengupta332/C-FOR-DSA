#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // ternary operator
    //    ( l.marks == r.marks) ? return l.roll < r.roll : return l.marks > r.marks;
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;

    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll; // If marks are equal, sort by roll number
    // }else{
    //     return l.marks > r.marks; // Sort by marks in descending order
    // }

    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if( l.marks < r.marks)
    // {
    //     return false;
    // }
    // else{
    //     return l.roll < r.roll; // If marks are equal, sort by roll number

    //     // if (l.roll < r.roll)
    //     // {
    //     //     return true;
    //     //     /* code */
    //     // }
    //     // else{
    //     //     return false;
    //     // }

    // }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}