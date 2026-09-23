#include <iostream>
#include <string>
using namespace std;
int main (){
    string str;
    getline(cin,str);
    //reverse 1st half
    int n= str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str<<endl;
}