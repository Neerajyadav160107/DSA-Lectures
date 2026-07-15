// WAP to print he given pattern 
//     1
//    121
//   12321
//  1234321

/* The paattern basically is composition of 3 patterns 
   i.e reverse space + reverse triangle + reverse number star traingle 
   here reverse star triangle pattern is 
   1
   21
   321
   4321
   54321 and so on 
   refer numbertraingle 2 .cpp for code ..
   */

#include <iostream>
using namespace std;
int main () {
    int n;
    cout <<"Enter no of lines :";
    cin >> n;
    
    for ( int i=1 ; i<=n; i++) {
        // spaces
        for ( int k=1;k<=n-i;k++){
            cout << " "; 
        }
        for ( int j=1 ; j<=i; j++){
            cout << j ;

        }
        cout << endl ;
    }
 



}