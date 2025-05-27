#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    // sort(starting, ending);
    // sort(arr, arr + n); // ascending
    sort(arr, arr + n, greater<int>()); // descending
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    
    


  
    return 0;
}