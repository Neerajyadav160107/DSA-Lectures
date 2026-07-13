// wap to print the given pattern 
// *
// ***
// *****
// ********


#include <iostream> 
using namespace std ;
int main () {
    int n ;
    cout <<"No of rows :" ;
    cin>>n;
    for ( int i=1; i<=n; i++){
        for ( int j=1; j<=(2*i)-1 ; j++){
            cout <<"*";

        }
        cout << endl;
    }
}
// means j is j=1 ro 2i-1 { for odd star traingle }
