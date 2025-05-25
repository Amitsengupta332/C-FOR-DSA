#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i]; // Input for static array
        /* code */
    }
    int *b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
        /* code */
    }
    b[3] = 40;
    b[4] = 50;
    delete[] a; // Deleting static array is not necessary, but good practice
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
        /* code */
    }

    return 0;
}