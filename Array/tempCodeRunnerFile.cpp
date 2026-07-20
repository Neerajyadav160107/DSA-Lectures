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
    for ( int i=0;i<=n-1;i++){
        if (arr[i]==x) cout<<"Element is present in the array:";
        else cout<<"Not Found:";
    }
}