// Double Pointer:
// A double pointer is a pointer that stores the address of another pointer.
// It is declared using two asterisks (**).
#include <iostream>
using namespace std;
int main () {
    int x=5;
    int* ptr = &x;
    int** p = &ptr;
    cout <<&x<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl;
}
// Logic:
// x stores the value.
// ptr stores the address of x.
// p stores the address of ptr.
// Dereferencing p (*p) gives the address stored in ptr, which is the address of x.