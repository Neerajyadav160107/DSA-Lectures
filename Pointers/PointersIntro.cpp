#include <iostream>
using namespace std ;
int main () {
    float x =4.99 ;
    float* p =&x; // stores address of x in p
    cout<<&x<<endl;
    cout<<p;
    //here both'll give the same output 
    //HOW?
    //1st it creates a varaible for x whose value is 4 
    // then again a variable p which basically storing the address of x 
}

// SYNTAX : data_type * pointer_name;
// Pointer:
// A pointer is a variable that stores the memory address of another variable.
// It allows us to access and modify the variable indirectly using its address.
