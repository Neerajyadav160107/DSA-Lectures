#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxwealth = 0;
    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }
        if (sum > maxwealth) {
            maxwealth = sum;
        }
    }
    return maxwealth;
}
int main() {
    vector<vector<int>> accounts = { {1, 2, 3},{3, 2, 1} };
    int ans = maximumWealth(accounts);
    cout << "Maximum Wealth = " << ans << endl;
    return 0;
}