#include <iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is:" << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is:" << v.capacity() << endl;

    return 0;
}

// Size:
// Size is the number of elements currently stored in the vector.

// Capacity:
// Capacity is the total number of elements a vector can hold before
// it needs to allocate more memory.

// If size == capacity and push_back() is called,
// capacity usually doubles (implementation-dependent).