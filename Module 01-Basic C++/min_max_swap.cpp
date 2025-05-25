// #include<iostream>
// #include<algorithm>

#include<bits/stdc++.h> // This is not recommended for production code, but useful for competitive programming.

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    // if(a>b){
    //     cout << a << endl;
    // }else{
    //     cout << b << endl;
    // }

    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    // cout << swap(a, b) << endl;

    return 0;
}