//Find the second largest element in the given array.
// Step 1: Find largest , max = 18
// Step 2: traverse through the array , if (2ndmax<arr[i] && arr[i]!=max)
// int max= INT_MIN; if ( max<arr[i] max =arr[i])
// int smax=INT_MIN;if 

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
    int smax=INT_MIN;
    for ( int i=0;i<=n-1;i++){
        if (arr[i]!=max && smax<arr[i]) smax = arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
}
// Second Maximum Logic:
// After finding the maximum, traverse the array again.
// Ignore the maximum element and keep updating smax whenever a larger
// valid element is found. At the end, smax stores the second largest element.
