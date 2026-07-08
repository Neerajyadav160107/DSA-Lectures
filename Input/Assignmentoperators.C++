// = assignment operator , gives the value on the right to the variable on the left
// += adds the value on the right to the variable on the left and assigns the result to the variable on the left
// int x=7;
// x+=8 ; x=x+8 this will give the value of 15 to x
// -= subtracts the value on the right from the variable on the left and assigns the result to the variable on the left
// Ques : what is the result of the following code fragment 
#include <iostream>
using namespace std;
int main() {
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<< (p== q == r);
    int p =1;
    int q = 2;
    int r = 2;
    cout<< (p== q == r); // ( p==q) == (r) --> (0)==2--> 0
// copiler runs from left to right and it will first check the value of p and q and then it will check the value of r and then it will give the output.
// otherwise if (p) == (q==r) -> (1) == (1) ==(1) --> 1 [Ture] 
   return 0;
}   
// output will be 0 because p is not equal to q and the condition is false. If we change the value of p to 2, the output will be 1 because the condition will be true.  