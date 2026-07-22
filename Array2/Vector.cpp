 
// Vector:
// A vector is a dynamic array in C++ that can grow or shrink in size automatically.
// It stores elements in contiguous memory and provides built-in functions for easy manipulation.

#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v; //you need not to mention the size 
    // inserting / input do not []
    v.push_back(0);
    v.push_back(7);
    v.push_back(0);
    v.push_back(7);
    // it increments the size of the array and add the element in the array
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    
}