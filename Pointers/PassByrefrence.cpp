#include <iostream>
using namespace std ;
void swap ( int* x , int* y) {
    int temp =*x;
    *x = *y;
    *y = temp;
    return;
}
int main () {
    int a =8, b = 6;
    cin>>a>>b;
    swap(&a,&b);// int* = &a; we can fetch the value of x 
    cout <<a<<" "<<b;
}
