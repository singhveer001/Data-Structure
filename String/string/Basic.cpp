#include<iostream>
#include<string>

using namespace std;

int main(){

        string name ;
        cin>> name;

        // Finding length
        cout<<"Length of string is "<< name.length()<< endl;

        // Checking String is empty or not
        cout<< "String is empty or not : "<< name.empty()<<endl;

        // Checking position which character is present
        cout<<"Charater at position 1 is : "<< name.at(1)<<endl;

        // Checking front character
        cout<<"Front character is : "<<name.front()<<endl;

        // Checking back character of string
        cout<< "back character is : "<< name.back()<<endl<<endl;

        string str1 = "Veer";
        string str2 = "Bhan";

        cout<< "Before appending" <<endl;
        cout<< str1 <<endl;
        cout<< str2<<endl;
        
        // Append
        str1.append(str2);

        cout<< "After appending" <<endl;
        cout<< str1 <<endl;
        cout<< str2<<endl;

        // erase character in a string

        string desc = "This is a car";
        desc.erase(4,3);
        cout<<desc<<endl;

        // Inserting
        string name1 = "Veer Singh";
        string middleName = "Bhan";

        name1.insert(4,middleName);
        cout<< "printing name: "<< name1 <<endl;
        cout<<endl<<endl;
        
        string boy = "Veer";
        // Adding on back
        boy.push_back('R');
        cout<< boy <<endl;
        // deleting from back
        boy.pop_back();
        cout<< boy <<endl;


        string st1 ="Veer";
        string st2 = "Veer";
        if(st1.compare(st2) == 0){
            cout<< "Both string are matching"<<endl;
        }
        else{
            cout<< "Not matching"<<endl;
        }

}