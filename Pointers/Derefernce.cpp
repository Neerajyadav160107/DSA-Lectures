#include <iostream>
using namespace std;
int main () {
    int x =122 ;
    int * p =&x;
    cout<<x<<endl;
    *p=6;
    cout<<x;

}
// Dereference Operator (*):
// It accesses the value stored at the memory address held by a pointer.
// Example: int x = 122; int *p = &x;
// cout << *p;  // Prints the value of x (122).
// *p can also be used to modify the value of x through the pointer.
