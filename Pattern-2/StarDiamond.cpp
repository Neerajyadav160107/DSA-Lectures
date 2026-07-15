// WAP tp print the given pattern ( n=5):
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *


// ALGO : 
// nst : no of stars - initiliazing w 1 
// nsp : no of spaces - n-1 ; 
#include <iostream> 
using namespace std;
int main (){
    int n;
    cout <<" Enter No of Rows:";
    cin>>n;
    int nst = 1;
    int nsp = n-1;

    for ( int i =1 ; i <=2*n-1 ; i++){
        // spaces
        for ( int j =1 ;j <=nsp; j++){
            cout<<" " ;


        }
        if ( i<=n-1) nsp--;
        else nsp++;
        // so that the in next iteration space will be printed n-1 no of times
        // stars
        for ( int k=1; k<= nst; k++){
            cout <<"*";
        }
        if ( i<=n-1) nst +=2;
        else nst-=2;
        cout<< endl;
    }
}