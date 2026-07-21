#include<iostream>
using namespace std;
void display (int a[] , int size){
    for (int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size) {
    b[0] =100;
}
int main () {
    int arr[5]={1,4,2,7,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    // accessing the elements while passing in another function
    // updation : pass by value / reference ?
    display(arr,size);
    change(arr,size);
    display(arr,size);
}

//Array is pass by reference
// When we pass an array as an argument to a funation :
// - address of the array is passed
// -address of the 1st element of the array .