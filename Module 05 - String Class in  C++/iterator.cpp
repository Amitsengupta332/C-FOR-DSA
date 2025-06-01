#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello, World!";
    //    for (int i = 0; i < s.size(); i++)
    //    {
    //     cout << s[i] << " ";
    //     /* code */
    //    }
       for (string:: iterator it =s.begin(); it < s.end(); it++)
       {
        cout << *it << " ";
        /* code */
       }

    // cout << *s.begin() << endl; // Output: H
    // cout << *(s.end()-1) << endl;  

    return 0;
}