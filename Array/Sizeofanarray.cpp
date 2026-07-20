// 1)One Dimensional Array
// 2)Two Dimensional Array

// Size and size of operator ( how can we use it to find the length of an array )
#include <iostream>
using namespace std;
int main () {
    int arr[]={2,3,4,5,6,7,8,7,6,4,3,5,};
    int size = sizeof(arr)/sizeof(arr[5]);
    cout<<size;
}