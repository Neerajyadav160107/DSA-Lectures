// #include <iostream>
// #include <string>
// using namespace std;
// int main (){
//     string str = "Suraj Parmar";  
//     cout<<str<<endl;
//     str[0]='N';
//     str[1]='e';
//     cout<<str;
// }


#include <iostream>
#include <string>
using namespace std;
int main (){
    string str="Suraj Parmar";
    cout<<str<<endl;
    for (int i =0;str[i]!='\0';i++){
        if (i%2==0) str[i]='a';
    }
    cout<<str<<endl;
}
