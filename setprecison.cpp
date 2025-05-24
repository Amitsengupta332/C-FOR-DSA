#include<iostream>
#include<iomanip>

using namespace std;

int main()
{ 
    double d = 23.4567;
    cout << fixed << setprecision(2) << d << endl; // Set precision to 2 decimal places
    // cout<< d << endl;

    return 0;
}