#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);   // Read the entire line including spaces
    cout << s << endl; // Output the string
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word) {
        cout << word << endl;  
        cnt++;
    }
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    return 0;
}