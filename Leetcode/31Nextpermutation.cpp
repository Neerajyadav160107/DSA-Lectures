#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    // 1) Find pivot index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }

    // If already the last permutation
    if (idx == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // 2) Find next greater element from the end
    int j = -1;
    for (int i = n - 1; i > idx; i--) {
        if (nums[i] > nums[idx]) {
            j = i;
            break;
        }
    }

    // 3) Swap
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;

    // 4) Reverse the suffix
    reverse(nums.begin() + idx + 1, nums.end());
}

int main() {

    vector<int> arr1 = {1, 4, 5, 8};

    cout << "Before: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    nextPermutation(arr1);

    cout << "After: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
// Logic:
// Find the pivot (first decreasing element from the right).
// Swap it with the next greater element on its right.
// Reverse the remaining suffix to get the next lexicographically greater permutation.