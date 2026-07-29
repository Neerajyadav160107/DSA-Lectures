#include <iostream>
#include <vector>
using namespace std;
void display (vector<int>&a){
    for (int i=0;i<a.size();i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}
void reversepart (int i , int j , vector<int>&a){
    while ( i<=j){
        int temp= a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return;

}
int main () {
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    display(v);
    reversepart(0,2,v);
    display(v);
}
// Logic:
// Reverse only a specific part of the vector by swapping the start and end elements.
// After each swap, move i forward and j backward until they meet or cross.