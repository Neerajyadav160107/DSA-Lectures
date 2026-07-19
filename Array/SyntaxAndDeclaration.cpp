// Array is an Data Structure to store data
// An array is a collection of elements of the same data type
// stored in contiguous (continuous) memory locations.
// Each element is accessed using its index, starting from 0.

// Syntax and Declaration:
// int x[7] --> it will make 7 integer data type to store in a location
// Indexing In an array : starts from 0th index/element.
// let suppose if i want to store 5 in 3rd index in an array x 
// x[3]=5 .
// if i want to update ; we can easily update in the next iteration .
// an array runs till (size-1)

#include <iostream>
using namespace std ;
int main () {
    //Declration and Initilization
    int arr[7];
    //input 
    for (int i=0; i<=6;i++){
        cin>>arr[i];
    }
    //Printing Output 
    for (int i=0;i<=6;i++){
        cout<<arr[i]<< " ";
    }
}
//How to access elements in array ?
// cout<<arr[index of array];