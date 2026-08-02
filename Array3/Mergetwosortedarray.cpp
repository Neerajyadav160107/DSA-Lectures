#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n + m);
    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{ // arr[j]< arr[i] 
            res[k]=arr2[j];
            j++;
            k++;
        }
        // for remaining elements of arr2 
        if (i==n){ // arr1 all elements has been traversed
            while (j<m){
                res[k]=arr2[j];
                k++;
                j++;
            }
        }
        if (j==m){ // arr2 all elements has been traversed }
            while (i<=n-1){
                res[k]=arr1[i];
                k++;
                i++;
            } 
    
        }
    }
    return res;  
}  

int main() {
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {2, 3, 6, 7, 10, 12};
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] <<" ";
    }
    cout <<"";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector<int> v = merge(arr1, arr2);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
// Logic:
// Use three pointers: i for arr1, j for arr2, and k for the result array.
// Compare elements of both arrays, place the smaller one in the result,
// then copy any remaining elements after one array is exhausted.