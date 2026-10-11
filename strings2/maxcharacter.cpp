#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    string str = "suraj parmar";
    // return highest frequency of character in the string 
    int max = 0;
    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        int count = 1;
        for (int j=i+1; j<str.length(); j++){
            if (str[j]==str[i]) count ++;
        }
        if (max<count) max=count; 
    }
    cout<<max;

    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        int count = 1;
        for (int j=i+1; j<str.length(); j++){
            if (str[j]==str[i]) count ++;
        }
        if (count==max){
            cout << ch << " " << max << endl;
        }
    }
    cout<<max;
}