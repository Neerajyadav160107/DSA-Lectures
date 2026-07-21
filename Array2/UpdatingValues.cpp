#include <iostream>
using namespace std;
int main () {
    int arr []={0,7,0,7,2,0,0,5};
    int* ptr =arr; //giving address
    for (int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    ptr=arr; // arr is pointing to the 1st element

    *ptr =8; // ptr[0] =8
    ptr++;   // ptr is pointing to 2nd element
    *ptr =9; // to modify the 2nd element 
    ptr--;   // to realocate the array so it it points to 8 as a 1st element
    cout<<endl;
    for ( int i=0;i<=7;i++){
        cout<<*ptr<<" ";
        ptr++;

    }
    ptr =arr; // ptr is pointing to 1st element 
}
