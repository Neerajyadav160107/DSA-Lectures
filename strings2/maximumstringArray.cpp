#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int max = str[0] - '0';
    for (int i = 1; i < str.length(); i++) {
        int x = str[i] - '0';
        if (x > max) {
            max = x;
        }
    }
    cout << max;
    return 0;
}