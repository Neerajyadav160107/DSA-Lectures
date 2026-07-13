//WAP to print the given pattern 
// nst: no of stars
// nsp: no of spaces 
#include <iostream> 
using namespace std;
int main () {
    int n;
    cout <<" Enter No of Rows:";
    cin>>n;
    int nst = 1;
    int nsp = n-1;

    for ( int i =1 ; i <=n ; i++){
        // spaces
        for ( int j =1 ;j <=nsp; j++){
            cout<<" " ;


        }
        nsp-- ;
        // so that the in next iteration space will be printed n-1 no of times
        // stars
        for ( int k=1; k<= nst; k++){
            cout <<"*";
        }
        nst+=2;
        cout << endl;
        
    


}
}


//means in 1st lines the no of spaces will be nsp-1
// also no of stars will be n+=2 in each next iteration so nst+=2
