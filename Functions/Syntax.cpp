// Syntax for funations 
//the need for a return type :

// <void / int / float>: return type function_name (int a, int b , int c ): argumnets {
  // function body 
  
// }
 
#include <iostream>
using namespace std;
void startriangle(int x) {
    for ( int i =1 ; i<=x; i++) {
        for ( int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main () {
    startriangle (3);
    cout<<"Hello Parmar"<<endl;
    startriangle (4);
    cout<<"Captain Speaking"<<endl;
    startriangle (5);
    
    return 0;
}

// the code runs and goes to the main fxn and see a argument "startaringle "
// then it goes the fxn and see the argument of int x and it stores x as 3 
// then it runs the loop 
// then again it calls the fxn further and prints the code as stated condition 
// Basically it shows how fxn calls their value 