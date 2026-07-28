#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (j != i && nums[j] < nums[i]) {
                count++;
            }
        }

        ans.push_back(count);
    }

    cout << "Answer: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}