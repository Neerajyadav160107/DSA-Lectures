#include <iostream>
using namespace std;
int main () {
    int arr[]= {4,2,3,4,5,};
    int *ptr= arr; //giving address
    // cout<<ptr<<endl;
    // ptr[0]=8;
    // cout<<arr[0]<<endl;
    // for (int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }
    for ( int i=0; i<=4; i++){
        cout<<*ptr<< " ";
        ptr++;
    }
    // here address has been updated after each iteration and then that integer is printed when "cout"until last element and modification due to ptr++
}
// a pointer can access all the values stored in an array if it is givin the address of the 0th index value of the arraay
// i.e *ptr=&arr[0] or *ptr=arr will work too .