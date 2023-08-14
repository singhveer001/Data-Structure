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

    // Use Default Copy Constructor   //--> Default copy const use karne ke liye khudka constructor delte karna pdega isliye upar comment kiya hai

    Hero hero2(hero1);    
    // Hero hero2 = hero1;   // 2nd way
    // hero2.print();

    hero1.name[0]='S';

    // hero1.print();
  
    hero2.print(); 

    hero1 = hero2 ;

    // printing after doing copy assignment operator
    hero1.print();
  
    hero2.print(); 
}