/* WAP TO write the nth fibonacii number :
what is it : the sum of the next number then adds up to next one until nth term .
ex : 1,1,2,3,5,8,13,21,34,55...and so on upto nth sum
Realtion : fibo(n) = fibo (n-1) + fibo (n-2)
ALGO : int a , int b ,int sum 
let a=1 , b =1 sum = a+b 
*/
#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter a number:";
    cin>>n;
    int a =1 , b =1 , sum =0;
    for (int i=1; i<=n; i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    cout<<b;
}    