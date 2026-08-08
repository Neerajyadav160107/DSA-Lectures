#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //declartion
    // rows-> 3      0-2
    // columns ->3   0-2
    cout<<arr[0][1];
}
// Declaration:
// Syntax: data_type arr[rows][columns];
// In a 2D array, the column size must be specified during declaration.
// Example: int arr[][3];
