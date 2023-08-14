#include<iostream>
using namespace std;


class Hero {

    // Private: Private members are accessible only within the class that defines them. 
    // They are not accessible from derived classes or external functions or objects.
    private:        
    int health;
    char body;

    void print(){
        cout<< body << endl ;

    }

};

int main(){

    Hero veer;

    // Here give error because in private we can access them only in class

    // cout<< " Health is: "<< veer.health << endl;
    // cout<< " body is: " << veer.body << endl;
}