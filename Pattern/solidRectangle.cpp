#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"No fo rows:";
    cin>>n;
    int m;
    cout<<"No of columns:";
    cin>>m;
    for (int i=1;i<=n;i++){
        for (int j= 1;j<=m;j++)
        cout<<"*";
        cout<<endl;
    }
}
/* take input from user n and m 
n: no of lines
m: no of columns or things in each line 
Using nested loop */