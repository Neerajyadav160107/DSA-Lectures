//189.ROTATE ARRAY
//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <iostream>
#include <vector>
using namespace std;

void display (vector<int>&a){
    for (int i=0;i<a.size();i++){
        cout<<a[i]<< " ";
    }
}

void reversepart (int i , int j ,vector<int>&a){
    while (i<=j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    } 
    return;
}
int main () {
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);
    int k=2;
    int n=v.size();
    cout<<endl;
    // rotate :
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}
// Logic (Rotate Array):
// Reverse the first (n-k) elements.
// Reverse the last k elements.
// Finally, reverse the entire vector to get the array rotated by k positions.