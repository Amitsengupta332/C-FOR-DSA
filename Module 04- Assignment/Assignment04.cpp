#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int id;
        string name;
        char section;
        int totalMarks;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student best;

        for (int i = 0; i < 3; i++)
        {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.totalMarks;

            if(i ==0  ){
                best = s;
            }else if (s.totalMarks > best.totalMarks) {
                best = s;
            }
            else if (s.totalMarks == best.totalMarks && s.id < best.id)
            {
                best = s;
                /* code */
            }
        }
         cout << best.id << " " << best.name << " " << best.section << " " << best.totalMarks << endl;
        /* code */
    }
    
  
    return 0;
}