/*Algo : To print a reversal of a number 
take n as given number  , then a last digit 
the r = rverse number 
steps : ( n>0)
1st to r =r*10
2nd to calculate last digit : n/10
3rd add r to the last digit : r+=last digit */
#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter a number:";
    cin>>n;
    int lastdigit =0;
    int reverse =0;
    while (n>0){
        reverse*=10;
        lastdigit=n%10;
        reverse+= lastdigit;
        n/=10;
    }
    cout<<reverse;

}