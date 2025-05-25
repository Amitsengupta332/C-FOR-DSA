#include <bits/stdc++.h>
using namespace std;

int* fun()
{

    int* arr= new int[5];  
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        /* code */
    }

    return arr;
}

int main()
{
    int* x = fun(); // dynamic array

       for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
        /* code */
    }
    // fun();
    return 0;
}