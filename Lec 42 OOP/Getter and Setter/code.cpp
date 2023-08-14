// Using getter and setter we can access the private class property in other funxtion also

#include<iostream>
using namespace std;

class Hero {
private:
    int health = 5;  // If we dont give value then it prints garbage value

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

    // Here we create object using --> static allocation
    Hero veer;

    // using getter
    cout<< " health of veer is : " << veer.getHealth()<< endl;

    cout<< " level of veer : " << veer.getLevel() << endl;

    // Use setter

    veer.setHealth(70);
    veer.setLevel('A');

    cout<< "Health is : "<< veer.getHealth() << endl;
    cout<< " level is : " << veer.getLevel() << endl;


    return 0;


}