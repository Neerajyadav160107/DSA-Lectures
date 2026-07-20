//Find the maximum value out of all the elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    //input
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // int max=arr[0];
    int max= INT_MIN;
    for ( int i=0;i<=n-1;i++){
        if (max<arr[i]) max=arr[i];

    }
    cout<<max;
    //Alternative 
    // int max = arr[0];
    // for ( int i=1;i<=n-1;i++){
    //     if max<arr[i] max=arr[i]
    // }
    // cout<<max;
    

}
// Logic:
// Assume the smallest possible value as the maximum (INT_MIN).
// Traverse the array and update max whenever a larger element is found.
// After the loop, max stores the largest element in the array.

// Alternative Logic:
// Assume the first element is the maximum.
// Start checking from the second element and update max if a larger value is found.