#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    private:
    int health;

    public:
    char* name;
    char level;

    Hero(){
        cout<<" Simple Constructor Called "<< endl;
        name = new char[100];
    }
    
    // Copy Constructor
    Hero (Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        this -> name = ch ;

        cout<< " COpy Constructor called "<< endl;
        this -> health = temp.health;
        this -> level = temp.level ;
    }
    // For deep we have to create own default constructor
    void print(){
        cout<< endl;
        cout<< "[name: "<<  this -> name << " , ";
        cout<< " health: " << this -> health <<" , ";
        cout<< " level: " << this -> level << " ] " <<endl;
        cout<<endl;
    }

   int  getHealth (){
            return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[] ){
        strcpy(this -> name , name);
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Arpit";
    hero1.setName(name);
    hero1.print();

    Hero hero2(hero1);    
    // Hero hero2 = hero1;   // 2nd way
    hero2.print();

    hero1.name[0]='S';

    cout<< "doing changes in hero1"<< endl;
    hero1.print();

    cout<< " Changes dosent occus in hero"<< endl;   // because of diffrent copy of array and different address 
    hero2.print();  


}