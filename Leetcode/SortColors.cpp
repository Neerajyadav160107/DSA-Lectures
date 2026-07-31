// 75. Sort Colors
// Given an array v with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.


#include <iostream>
#include <vector>
using namespace std ;
//DUTCH ALGORITHM MTHD

void sortnumbers(vector<int>&v){
    int n=v.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while (mid<=high){
            if (v[mid]==2){
                int temp=v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }
            else if(v[mid]==0){
                int temp=v[mid];
                v[mid]=v[low];
                v[low]=temp;
                low++;
                mid++;
            }
            else {
                mid++;
            }
        
    }
    return;
}

int main () {
    vector <int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;

    sortnumbers(v);
    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;  
}
// Logic:
// Maintain three pointers: low, mid, and high.
// Place 0s at the beginning, 2s at the end, and leave 1s in the middle.