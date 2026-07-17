// Whenever we call a fxn
// here fun(x,y): actual parameters
// and ( int x , int y) which are receiving the values of x and y are : formal parameters 
#include <iostream>
using namespace std;
void fun(int x, int y){
    cout<<"address of fun x" <<&x<<endl;
    cout<<"address of fun y" <<&y<<endl;

}
int main () {
    int x=3;
    int y=7;
    cout<<"address of main x" <<&x<<endl;
    cout<<"address of main y" <<&y<<endl;
    fun(x,y);
}

// Actual Parameters: The values or variables passed to a function when it is called.
// Formal Parameters: The variables declared in the function definition that receive the actual parameters.
