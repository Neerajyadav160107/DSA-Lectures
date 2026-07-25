// Write a C++ program using vectors to perform the following operations:
// Input n integers into a vector.
// Display all elements of the vector.
// Find and print the sum of all elements.
// Find and print the maximum element of the vector.
// Search for a given element x in the vector.
// Display “Found” if the element exists; otherwise display “Not Found”.
// Insert a new element at the end of the vector using push_back().
// Remove the last element of the vector using pop_back().
// Display the vector after insertion and after deletion.


#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v;

    // Input
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // Print
    cout << "\nVector:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Sum
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    cout << "\n\nSum = " << sum;

    // Maximum
    int maximum = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > maximum)
            maximum = v[i];
    }
    cout << "\nMaximum = " << maximum;

    // Search
    int key;
    cout << "\n\nEnter element to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Found";
    else
        cout << "Not Found";

    // push_back()
    int value;
    cout << "\n\nEnter element to insert: ";
    cin >> value;

    v.push_back(value);

    cout << "After push_back:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // pop_back()
    v.pop_back();

    cout << "\nAfter pop_back:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}