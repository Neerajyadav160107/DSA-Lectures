// whats recurssion ? -> function calling itself .
// basically loops ki replacement and to solve problems efficiently .

// FUNCTION CALLS :

#include <iostream>
using namespace std ;
// void greet () {
//     cout <<"good moring"<<endl;
//     cout <<"SURAJ"<<endl;
// }
// int product (int a , int b){
//     return a*b;
// }
// int main () {
//     // int x = product (2,4);
//     // cout<<x<<endl;

//     greet();
//     int a =6;
//     int b =8;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     cout<<max(a,b);
// }

// void fun (int n){
//     if (n==0) return;
//     cout<<"hello NY"<<endl;
//     fun(n-1);
  
// }
// int main () {
//     fun(3);
// }

void alias(int n){
    if (n==0) {
        return ;
    }
    cout<<"GOOD MORNING"<<endl;
    alias(n-1);
}

int main (){
    int n;
    cin>>n;
    alias(n);
}