//WAP to print the given patterm 
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows:";
    cin>>n;
    int a=5;
    
    // for ( int i =1 ; i<=n; i++){
    //     if ( i%2!=0) a=1; // row no odd
    //     else a =0; // row no even 
    //     for ( int j=1 ; j<=i; j++){
    //         cout <<a;
    //         //till this we have printed the baisc structure of a  binary triangle of 1 and 0 
    //         // tp get the alternate pattern of 1 and 0 we will do 
    //         // flipping 
    //         if ( a==1 ) a=0;
    //         else a=1;
    //     }
    //     cout <<endl;
    for ( int i = 1 ; i<=n; i++){
        for (int j=1;j<=i; j++){ 
            if ( (i+j)%2==0 ) cout << 1; // condition here : if both i and j are odd or even ---> its giving 1 , else 0 when i & j !=row and column
                                         // when both are even or odd , their sum is divisible by 2 then it will also give ---> 1;
            else cout <<0; cout<< "  ";
        }
        cout<<endl;
            
        }
    
    }








