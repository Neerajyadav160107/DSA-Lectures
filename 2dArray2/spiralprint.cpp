#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "enter rows of matrix: ";
    cin >> m;

    int n;
    cout << "enter cols of matrix: ";
    cin >> n;

    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    // spiral
    int min_row = 0;
    int max_row = m - 1;
    int min_col = 0;
    int max_col = n - 1;

    while (min_row <= max_row && min_col <= max_col) {

        // Right
        for (int j = min_col; j <= max_col; j++) {
            cout << matrix[min_row][j] << " ";
        }
        min_row++;

        // Down
        for (int i = min_row; i <= max_row; i++) {
            cout << matrix[i][max_col] << " ";
        }
        max_col--;

        // Left
        if (min_row <= max_row) {
            for (int j = max_col; j >= min_col; j--) {
                cout << matrix[max_row][j] << " ";
            }
            max_row--;
        }

        // Up
        if (min_col <= max_col) {
            for (int i = max_row; i >= min_row; i--) {
                cout << matrix[i][min_col] << " ";
            }
            min_col++;
        }
    }

    return 0;
}
