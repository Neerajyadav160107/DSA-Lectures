#include <iostream>
#include <vector>
using namespace std ;
//DUTCH ALGORITHM MTHD

void sortnumbers(vector<int>&v){
    int n=v.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while (mid<=high){
            if (v[mid]==2){
                int temp=v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }
            else if(v[mid]==0){
                int temp=v[mid];
                v[mid]=v[low];
                v[low]=temp;
                low++;
                mid++;
            }
            else {
                mid++;
            }
        
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
// Maintain three pointers: low, mid, and high.
// Place 0s at the beginning, 2s at the end, and leave 1s in the middle.