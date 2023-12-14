#include<iostream>
#include<vector>
using namespace std;

// int main(){

//     vector< vector<int> > arr;
//     vector<int> a{1,2,4};
//     vector<int>b{5,3,3};
//     vector<int>c{4,8,9};


//     // Pushing vector<int> in vector 
//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

   
//     for(int i=0; i<arr.size();i++){
//         for(int j=0; j<arr[0].size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;

// }

int main(){
    vector<vector<int>> arr(4,vector<int>(3,6)); // here 4 is row , 3 is col and 6 is value that put in these array

    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


// vector<int> arr(4,3); // here first value initialize size and second value is initializatiom value