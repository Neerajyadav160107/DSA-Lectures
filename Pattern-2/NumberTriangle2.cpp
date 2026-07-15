// WAP to print 
//    1         j= 1to i
//    21        j= 1 to 2
//    321       j= 1 to 3
//    4321      j= 1 to 4
//    54321     j= 1 to 5      and so on 
// here in each line ,j is printed in each line 
// basically it is printing j =1 to j<=i.
# include <iostream> 
using namespace std ;
int main () {
    int n ;
    cout <<"No of lines :";
    cin >>n;
    for ( int i =1 ;i<=n; i++){
        for ( int j=i; j>=1 ;j--){
            cout << j;
        }
        cout <<endl;
    }


    
}