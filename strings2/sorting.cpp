#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    sort(str.begin() ,str.end());
    cout<<str;
}
// white space  and caps letter comes first --> as string follows the ascii value for the lexographical order 
// Sort --> sorts wrt to ASCII values of the input . 