#include <bits/stdc++.h>
using namespace std;

class ABC{
 int x;

 public:

 void set(int n){
    x = n; // Setting the value of x
 }

 int get(){
    return x; // Returning the value of x
 }
};
int main()
{
    ABC obj1;
    obj1.set(3);
    cout << obj1.get() << endl; // Output: 3
  
    return 0;
}