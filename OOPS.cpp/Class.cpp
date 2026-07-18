//Class is a user-defined datatype.

// #include<iostream>
// using namespace std;
// int main ()  {
//     int health[100] ={};
//     int score[100]={};
//     char name[100][10]={};

// }
// rather encapsulate the data into a class [multiple data into a single class]
#include <iostream>
class Player{
    public:
    int score;
    int health;
    
};
using namespace std;
int main () {
    int a =10;
    Player amit;// variable
    amit.score =90;
    amit.health =100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;
    
    Player harsh;
    harsh.score=100;
    harsh.health=20;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;
    // Player is the class (blueprint).
    // amit and harsh are objects (instances) of the Player class.
    // Both have their own score and health values stored independently.
}

// Class:
// A class is a blueprint that defines the data members and functions an object will have.
// Object:
// An object is a real instance of a class. Each object has its own separate copy of the class's data members.




// Class: It's a blueprint basically a structure.
// A class is a user-defined data type that groups data members and member functions
// into a single unit to represent an object.
// Encapsulation:
// Encapsulation is the process of bundling data and the functions that operate on it
// inside a class while controlling access using access specifiers (public, private, protected)


// Inheritance:
// Inheritance is an OOP feature that allows one class (derived class)
// to acquire the properties and behaviors of another class (base class),
// promoting code reusability and extensibility.
