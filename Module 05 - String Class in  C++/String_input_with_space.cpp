#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
    // cin.getline(s,100);
    cin.ignore();      // Ignore the newline character left in the input buffer
    getline(cin, s);   // Read the entire line including spaces
    cout << x << endl; // Output the integer
    cout << s << endl; // Output the string
    return 0;
}