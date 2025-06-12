#include <bits/stdc++.h>
using namespace std;

//  name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

class Student
{
public:
    string nm;
    string cls;
    string s;
    int id;
    float math_marks;
    float eng_marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "
             << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}