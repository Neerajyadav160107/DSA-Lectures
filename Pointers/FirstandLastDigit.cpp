//Write a function to find out the first and last digit of a number without returning anything .
// lest suppose n =12345
// ld =n% 10--> 5
// while n>9
// its basically runs the loop until the last digit
// when n<9; the loop will break and hence its the last digit

#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2){
    *ptr2 =n%10; //lastdigit
    while (n>9){
        n/=10;

    }
    *ptr1= n;
    return;
}
int main () {
    int n;
    cout<<"Enter Input:";
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr1 =&firstDigit;
    int* ptr2 =&lastDigit;
    find ( n, ptr1 ,ptr2);
    cout<<firstDigit<<" "<<lastDigit;

}