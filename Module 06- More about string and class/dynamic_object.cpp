#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *Sakib = new Cricketer("Bangladesh", 75);
    // cout << Sakib->jersey << endl;
    Cricketer *Rifat = new Cricketer("Bangladesh", 10);
    // cout << Rifat->jersey << endl;
    Sakib = Rifat;
    cout << Rifat->jersey << " " << Sakib->jersey << endl;
    delete Sakib;                  // Deleting the object pointed by Sakib
    cout << Sakib->jersey << endl; // This will cause undefined behavior since Sakib is deleted

    return 0;
}