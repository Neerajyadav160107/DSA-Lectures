#include <iostream>
#include <string>
using namespace std;
int main (){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int n = str.length();
    cout<<"The second half of the string is: "<<str.substr(n/2);
}