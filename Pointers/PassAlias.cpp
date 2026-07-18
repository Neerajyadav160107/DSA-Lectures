#include <iostream>
using namespace std ;
void swap ( int &a , int &b) {
    int temp =a;
    a = b;
    b = temp;
    return;
}
int main () {
    int a =8, b = 6;
    cin>>a>>b;
    swap(a,b);// int* = &a; we can fetch the value of x 
    cout <<a<<" "<<b;
}