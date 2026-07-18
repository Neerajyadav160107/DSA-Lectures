#include <iostream>
using namespace std;
int main () {
    int x =7 ;
    int* ptr = &x;
    cout<<ptr<<endl; // 0x16db4eaac
    ptr=ptr+1;
    cout<<ptr<<endl; // 0x16db4eab0
}
// here p=p+1; in this number of bytes are being added in that address of that variable .

// the numbers are in hexadecimal
// we goes +bytes after each address .
