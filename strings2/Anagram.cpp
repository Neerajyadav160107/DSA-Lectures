#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s ="Suraj Parmar";
    string t ="Parmar Suraj";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t) cout<<true;
    else false;
}