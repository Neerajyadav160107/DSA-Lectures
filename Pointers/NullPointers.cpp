//IMPORTANT DUHHH!!!!
// Good practices of using pointers 
#include <iostream>
using namespace std;
int main () {
    int* ptr1=NULL; //a reserved address
    int* ptr2=0;
    int* ptr3=0;
    cout<<ptr1<< " "<<ptr2<< " "<<ptr3; //0
}
// Null Pointer:
// A null pointer is a pointer that does not point to any valid memory location.
// It is initialized with nullptr (or NULL in older C++) to indicate it points to nothing.