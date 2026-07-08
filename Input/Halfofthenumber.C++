// Question : Take intehr as input and print half of the number .
#include <iostream>
using namespace std;
int main () {
    int x;
    cin>>x; // x= 7
    float y = (float)x; // typecast the value of int x to float and then divide it by 2 and assign the value to y
    cout<<y/2;
}