#include <iostream>
using namespace std;
// void swap(int a , int b){

//}
int main () {
    int a ,b ;
    cin >>a>>b ;
    a = a+b ;
    b = a-b ;
    a = a-b ;
    // swap(a,b);
    cout <<a<<" "<<b;

}
// why swap ain't working w functions ?
// it is passed by value not refernce 
// -->Doesn't work because pass-by-value creates copies; original variables are unchanged.
