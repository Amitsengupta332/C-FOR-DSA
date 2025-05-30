#include <bits/stdc++.h>
using namespace std;

int main()
{
  string line;
  while (getline(cin, line))
  {
    string filtered = "";

    for (char ch : line)
    {
      if (ch != ' ')
      {
        filtered += ch;
      }
    }
    sort(filtered.begin(), filtered.end());

    cout << filtered << endl;
  }

  return 0;
}