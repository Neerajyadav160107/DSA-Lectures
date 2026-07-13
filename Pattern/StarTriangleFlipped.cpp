// WAP to print the given pattern 
//      *
//    * *
//  * * *
//* * * *

/* ALGO : 1st a reverse space pattern like start is printed so n-1 is being used for its reversal.
          2ndly to overlapped an another flipped star pattern  */

#include <iostream>
using namespace std;
int main () {
    int n ;
    cout <<"No of rows";
    cin>>n;
    for ( int i=1;i<=n;i++){
        // spaces
        for (int j=1;j<=n-i ;j++){
        cout<<" "<<" ";

        }
        //stars 
        for (int k=1; k<=i; k++){
            cout <<"*"<< " ";
        }
        cout<<endl;
    }


}
/*Basically its a combination of two loops 
*/
