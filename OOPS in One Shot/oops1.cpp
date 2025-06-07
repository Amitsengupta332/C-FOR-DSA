#include <bits/stdc++.h>
using namespace std;

// class class_name{
//  int data_1;
//  int data_2;
// };

class Fruit
{

public: // Access specifier
    string name;
    string color;
};

int main()
{
    Fruit apple; // Object
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << "-" << apple.color << endl;

    // pointer
    Fruit *mango = new Fruit;
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << "-" << mango->color << endl;

    return 0;
}