// WAP to print the given pattern 
// *******
// *** ***
// **   **
// *     *
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no of lines: ";
    cin >> n;

    // First line
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << "*";
    cout << endl;

    int nsp = 1;
    int m = n - 1;

    for (int i = 1; i <= m; i++) {

        // Left stars
        for (int j = 1; j <= m + 1 - i; j++)
            cout << "*";

        // Spaces
        for (int j = 1; j <= nsp; j++)
            cout << " ";

        // Right stars
        for (int j = 1; j <= m + 1 - i; j++)
            cout << "*";

        cout << endl;

        nsp += 2;
    }
}