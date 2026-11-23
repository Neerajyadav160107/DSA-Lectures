#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string str = "123456";
    int x = stoi(str);
    cout<<x<<endl;

    int a = 1234567;
    string s = to_string(a);
    cout<<a;

    // stoll()--> to convert in long long
    string str = "1234567891234";
    long long x = stoll(str);
    cout<<x;

}
// stoi() — String to Integer:
// Converts a numeric string into an integer.
// Example: "123456" → 123456