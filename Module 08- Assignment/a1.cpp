// #include <bits/stdc++.h>
// using namespace std;

// string replaceSubString(string s, string x)
// {

//     while (true)
//     {
//         size_t pos = s.find(x);
//         if (pos == string::npos)
//             break;
//         s.replace(pos, x.length(), "#");
//     }
    

//     return s;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     cin.ignore();

//     for (int i = 0; i < t; i++)
//     {
//         string s, x;
//         cin >> s >> x;

//         string result = replaceSubString(s, x);
//         cout << result << endl;
//         /* code */
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

string replaceSubString(string s, string x)
{
    while (true)
    {
        size_t pos = s.find(x);
        if (pos == s.npos) // No ::
            break;
        s.replace(pos, x.length(), "#");
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // to consume leftover newline

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        string result = replaceSubString(s, x);
        cout << result << endl;
    }

    return 0;
}
