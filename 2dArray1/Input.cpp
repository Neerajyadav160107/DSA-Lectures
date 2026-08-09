#include <iostream>
using namespace std;
int main () {
    // m = rows , n = columns
    // in for loop i =rows , j = columns
    int m ;
    cout<<"Enter the no of rows: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no of columns: "<<endl;
    cin>>n;
    int arr[m][n];
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        } 
    }
    cout<<"Roll number and respectibe marks are as follows:"<<endl;
    // print
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }

}