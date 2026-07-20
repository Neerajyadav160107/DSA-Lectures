//Stores contiguous memory allocation
#include<iostream>
using namespace std;
int main () {
    int arr[5];
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr;
}
// IMP : Address of an array is the address of the 1st byte of its 1st element .
// 0x16f1aeaa4      a4
// 0x16f1aeaa8      a8
// 0x16f1aeaac      ac
// 0x16f1aeab0      b0
// 0x16f1aeab4      b4
// 0 1 2 3 4 5 6 7 8 9 a b c d e f
// 4 bits of memeory 

// Logic:
// Array elements are stored in contiguous (continuous) memory locations.
// Since each int occupies 4 bytes, the address of each next element increases by 4 bytes.
// The address of the array (arr) is the same as the address of its first element (&arr[0]).