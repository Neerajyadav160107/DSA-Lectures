#include <iostream>
#include <vector>
using namespace std ;
//BASIC METHOD
void sortnumbers(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noo=0;
    int notwos=0;
    for (int i=0;i<n;i++){
        if (v[i]==0) noz++;
        else if (v[i]==1) noo++;
        else notwos++;
    }
    // fill
    for (int i=0; i<n;i++){
        if(i<noz) v[i]=0;
        else if (i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
    return;    
}

int main () {
    vector <int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;

    sortnumbers(v);
    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;  
}
// Logic:
// Count the number of 0s, 1s, and 2s.
// Then overwrite the vector by filling all 0s first, followed by 1s, then 2s.