#include <iostream>
#include <vector>
using namespace std ;
int main () {
    vector < vector <int> > v(3,vector<int>(4,2)); // 3 vectors and each vector is of size 4 with initial value of 2 
    // cout << v.size();
    for ( int i=0; i<3; i++){
        for ( int j=0; j<4;j++){
            cout<<v[i][j]<< " ";
        }
        cout <<endl;
    }
    cout << v.size()<<endl;
    cout << v[0].size();


}