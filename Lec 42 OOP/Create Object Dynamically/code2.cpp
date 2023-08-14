// getter setter in dynamic allocation

#include<iostream>
using namespace std;

class Hero {
private:
    int health;  // If we dont give value then it prints garbage value

public:
    char level;

int getHealth (){
    return health;
} 

char getLevel (){
    return level;
}

void setHealth(int h){
    health = h;
}

void setLevel (char ch){
    level = ch;
}

};


int main(){

      // create object --> static allocation
    Hero a;

    cout<< "health is :" <<  a.getHealth() << endl;
    cout<< " level is : "<< a.level <<endl;

    // Changing value in static allocation
    a.setHealth(47);
    a.setLevel ('B');

    // cout<< "Number changes :" <<  veer.number << endl;
    // cout<< " name  Changes: "<< veer.name <<endl;



    // Create Object --> dynamic allocation (Dynamically)
    Hero *b = new Hero;

    cout<< "Health is :" <<  (*b).getHealth() << endl;
    cout<< " Level is : "<< (*b).level <<endl;

    // We can also declare this with this type
    cout<< "Number is other:" <<  b -> getHealth() << endl;
    cout<< " Name in other : "<< b -> level <<endl;

    // Changing value in Dynamic  allocation
    b ->setHealth(70);
    b ->level ='H';
    cout<< " name Changes : "<< b -> level <<endl;
    cout<< "Number is Change:" <<  b -> getHealth() << endl;


}