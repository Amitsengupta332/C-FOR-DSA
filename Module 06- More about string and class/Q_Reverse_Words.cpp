#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    reverse(s.begin(), s.end()); // Reverse the entire string first
    cout << word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    return 0;
}