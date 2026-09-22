#include <iostream>
#include <string>
using namespace std;
int main (){
    // string str="Suraj Parmar is at Amazon";
    // cout<<str.length(); // index = 0 to str.length()-1
    // int len = str.length();


    // string str ="abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s= "Suraj"; 
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;
    
    
// "+" OPERATOR
    // string s = "suraj";
    // cout<<s<<endl;
    // s= s+"neeraj";
    // cout<<s<<endl;

//  reverse()
    string str="abcdef";
    cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+5);
    cout<<str<<endl;

}