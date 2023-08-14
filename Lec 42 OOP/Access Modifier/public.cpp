#include<iostream>
using namespace std;


class Hero {

    // Public members are accessible from anywhere in the program. 
    //They can be accessed by objects of the class, derived classes, and 
    //external functions or objects. 
    public:        
    int health;
    char body;

};

int main(){

    Hero veer;

    cout<< " Health is: "<< veer.health << endl;
    cout<< " bod is: " << veer.body << endl;
}