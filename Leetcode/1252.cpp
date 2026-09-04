#include <iostream>
#include <vector>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(m, vector<int>(n, 0));

    for (int i = 0; i < indices.size(); i++) {

        int ri = indices[i][0];
        int ci = indices[i][1];

        // Increment row ri
        for (int j = 0; j < n; j++) {
            matrix[ri][j]++;
        }

        // Increment column ci
        for (int j = 0; j < m; j++) {
            matrix[j][ci]++;
        }
    }

    // Count odd elements
    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 != 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int m, n;

    cout << "Enter rows: ";
    cin >> m;

    cout << "Enter columns: ";
    cin >> n;

    int k;
    cout << "Enter number of indices: ";
    cin >> k;

    vector<vector<int>> indices(k, vector<int>(2));

    cout << "Enter indices:\n";

    for (int i = 0; i < k; i++) {
        cin >> indices[i][0] >> indices[i][1];
    }

    cout << "Number of odd cells: "
         << oddCells(m, n, indices) << endl;

    return 0;
}