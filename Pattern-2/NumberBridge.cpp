
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter No of lines : ";
    cin >> n;

    int m = n - 1;
    int nsp = 1;

    for (int i = 1; i <= m; i++) {

        // Left numbers
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << a;
            a++;
        }

        // Spaces
        for (int k = 1; k <= nsp; k++) {
            cout << " ";
        }

        nsp += 2;

        // Right numbers
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << a;
            a++;
        }

        cout << endl;
    }




}