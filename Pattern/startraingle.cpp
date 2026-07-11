#include <iostream>
using namespace std;
int main () {
    int n ;
    cout <<"No of rows";
    cin>>n;
    for ( int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
    }


}
/* First we check that i < =n then fo inside the loop 
then checks j<=1 then the condistion runs cout<<"*" for once as in the next loop j>i 
the loops ends then 
again goes to the initial loop and i becomes 2 and futher goes the same ...
this program when i =1 to n & j = 1 to i
gives a right angles triangle as output .ˍˍˍ*/