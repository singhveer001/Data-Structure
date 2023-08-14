#include<iostream>
using namespace std;

class Animal {

        public:
        int age = 25 ;  // if we dont give value then  it take garbage value
        int weight;

        public: 
        void speak (){

            cout<< endl << " Barking  "<< endl;
        }

};

class Dog : public Animal {
        // yha bhi kuch bhi likh skte hai
};

class GermanSheferd : public Dog {

    // yha bhi kuch bhi likh skte hai    isliye kuch nhi likha kyuki 1st vale class se access ho ja rha

};

int main(){

    GermanSheferd puppy ;

    puppy.speak();      

    cout<< puppy.age << endl;


}
