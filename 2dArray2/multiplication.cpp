#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "enter rows of 1st matrix: ";
    cin >> m;
    cout << "enter columns of 1st matrix: ";
    cin >> n;
    cout << "enter rows of 2nd matrix: ";
    cin >> p;
    cout << "enter columns of 2nd matrix: ";
    cin >> q;

    if (n == p) {
        int a[m][n];
        cout << "Enter elements of 1st matrix: "<<endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "Enter elements of 2nd matrix: "<<endl;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> b[i][j];
            }
        }
        int res[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < p; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout<<"Multiplication of the entered matrices is :"<<endl;
        // Print
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "The matrices cannot be multiplied";
    }
}