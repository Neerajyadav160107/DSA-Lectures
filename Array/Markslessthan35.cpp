//Given an array of marks of students if tge marks of any student 
//is less than 35 print its roll number .[roll number here refers
//to the index of the array].

#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    int marks[n]; // 0 to n-1
    cout<<"Enter Marks:";
    //input
    for (int i=0;i<=5;i++){
        cin>>marks[i];

    }
    //output
    for ( int i=0; i<=n-1;i++){
        if (marks[i]<35) cout <<i<< " ";

    }

}