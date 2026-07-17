#include <iostream>
using namespace std;
void fun(int x, int y){
    cout<<"address of fun x" <<&x<<endl;
    cout<<"address of fun y" <<&y<<endl;

}
int main () {
    int x;
    int y;
    cout<<"address of main x" <<&x<<endl;
    cout<<"address of main y" <<&y<<endl;
    fun(x,y);


}
// Arguments:Values passed to a function when it is called, allowing the function to work with different inputs.
// Address: The memory location of a variable, accessed using the address-of (`&`) operator in C++.
