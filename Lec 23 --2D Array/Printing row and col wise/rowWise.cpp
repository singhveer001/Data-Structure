#include<iostream>
using namespace std;

int main(){

    int arr [3] [3] = {
                    {1,2,3},
                    {3,5,4},
                    {9,7,8}
                 };
    // Row wise print

    for(int i=0 ; i<3; i++){
        // For every row we need to print value in each column
        for(int j=0 ; j< 3 ; j++){

            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }

    cout<<endl;
    cout<< endl;
    // Coulmn wise print
    cout<< "Printing Column wise"<< endl;
     for(int i=0 ; i<3; i++){
        // For every column we need to print value in each row
        for(int j=0 ; j< 3 ; j++){

            cout<< arr[j][i] << " ";
        }
        cout<< endl;
    }

}