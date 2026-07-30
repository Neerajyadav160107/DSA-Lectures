#include <iostream>
#include <vector>
using namespace std ;
void sortnegative(vector<int>& v) {
    int i = 0;
    int j = v.size() - 1;

    while (i < j) {
        if (v[i] < 0) {
            i++;
        }
        else if (v[j] >= 0) {
            j--;
        }
        else {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}
int main () {
    vector <int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(-1);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(-3);
    v.push_back(-5);
    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;

    sortnegative(v);

    for ( int i=0; i<v.size();i++){
        cout<<v[i]<< " ";
    }


}
