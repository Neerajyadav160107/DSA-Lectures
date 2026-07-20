//Count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter an array:";
    int arr[n];
    //input 
    for ( int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int count=0;
    int x;
    cout<<"Given Number is:";
    cin>>x;
    for (int i=0;i<=n-1;i++){
        if (arr[i]>x)
        count=count+1;
    }
    cout<<"No of elemnets greater than the given array is:"<<" "<<count;
}