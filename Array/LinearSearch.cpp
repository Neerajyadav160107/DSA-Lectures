// IMPORTANT: Linear Search 
// Find the elememt x in the array . Take array and x as input 

#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    // Input array
    for ( int i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    int x;
    cout<<"Enter the element you want to search:";
    cin>>x;
    // search
    // check mark
    bool flag = false; // false--> element is not present
    for ( int i=0;i<=n-1;i++){
        if (arr[i]==x) flag= true;
    }
    if (flag==true) cout<<"Element Present:";
    else cout<<"404 element not found";
}

// to check the condition and print the op once we'll checkmark which is : bool
// Logic:
// Take the array input, then compare each element with the target value.
// If a match is found, set flag = true. After the loop, use the flag
// to decide whether the element is present or not.