// In this code we can create Object using --> Dynamic Allocation

#include<iostream>
using namespace std;

class Hero{
    public:
    int number =7;

    char name = 'A';

};

int main(){
    // create object --> static allocation
    Hero veer;

    cout<< "Number is :" <<  veer.number << endl;
    cout<< " name is : "<< veer.name <<endl;

    // Changing value in static allocation
    veer.number= 47;
    veer.name = 'B';

    cout<< "Number changes :" <<  veer.number << endl;
    cout<< " name  Changes: "<< veer.name <<endl;



    // Create Object --> dynamic allocation (Dynamically)
    Hero *aditya = new Hero;

    cout<< "Number is :" <<  (*aditya).number << endl;
    cout<< " name is : "<< (*aditya).name <<endl;

    // We can also declare this with this type
    cout<< "Number is other:" <<  aditya -> number << endl;
    cout<< " Name in other : "<< aditya -> name <<endl;

    // Changing value in Dynamic  allocation
    aditya ->number =70;
    aditya ->name ='H';
    cout<< " name Changes : "<< aditya -> name <<endl;
    cout<< "Number is Change:" <<  aditya -> number << endl;



}