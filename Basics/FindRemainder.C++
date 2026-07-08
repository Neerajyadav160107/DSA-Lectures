//Take two integers input a and b :a>b; and find the remainder when a is divided by b .
#include <iostream>
using namespace std;
int main() {
    int a =10; // a means dividend
    int b=4;   //b means divisor
    int r;     // r means remainder 
    int q ;    // q means quotient
    q=a/b; // q means quotient
    // a= (b*q)+r
    //r= a-(b*q)
    r=a-(b*q);
    cout<<"The remainder when "<<a<<" is divided by "<<b<<" is "<<r;
    return 0;
}