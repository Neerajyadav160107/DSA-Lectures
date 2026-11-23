// Given an array of size n+1 consisting of integres from 1+n
// one of the elements is duplicate in the array. 
// find the duplicate array.


// M1 : BRUTE FORCE 
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int arr[8]= {6,1,2,4,3,7,1,5,};
    int n = sizeof(arr);
    bool flag = false;
    // no of operations to find the duplicate element for 1:
    // 7+5=12 operationź to find that element.
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i];
                flag = true;
                break;
            }
        }
        if (flag == true) break;
    }
}
// TC- O(n3)


// Another method for previous problem :
// size of array =n+1;
// make a new array anything ex: int check[8]
// make a vector by deafault and give the value 0;

// it will increase the space complexity 


// OR We can do by basic math:
