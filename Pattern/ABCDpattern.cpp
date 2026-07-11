#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (char ch = 'A'; ch <= 'D'; ch++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}