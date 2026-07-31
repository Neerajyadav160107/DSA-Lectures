#include <iostream>
#include <vector>
using namespace std;

void sortVector(vector<int>& v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
}

int main() {
    vector<int> v;

    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sortVector(v);   // Function call

    cout << "Sorted Vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}