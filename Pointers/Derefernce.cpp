#include <iostream>
using namespace std;
int main () {
    int x =122 ;
    int * p =&x;
    cout<<x<<endl;
    *p=6;
    cout<<x;

}
//Dereference Operator :
// 1st it makes a variable int x =122;
// then same for p 
// then cout *p means--> it goes to the address of the variable stored in the p and prints the value of that variable . 
// basically easy way out to access value of variable through pointer . 
// we can update the value through pointer too .