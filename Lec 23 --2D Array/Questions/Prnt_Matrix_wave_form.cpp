#include<iostream>
#include<vector>
using namespace std;

void waveprintMatrix(vector<vector<int>> v){
    int row = v.size();
    int col = v[0].size();

    for(int startCol=0 ; startCol<row; startCol++){
        // findinrow is even or odd
        if((startCol & 1) == 0){
            // if even then top to bottom
            for(int i =0; i<col; i++){
                cout<< v[i][startCol] <<" ";
            }
        }
        else{
            // if odd column then bottum to top
            for(int i=col-1 ; i>=0; i--){
                cout<< v[i][startCol]<<" ";
            }
        }
    }

}

int main(){

    vector<vector<int>> v{
        {1,2,3,4},
        {4,5,4,32},
        {3,8,9,11},
        {12,33,19,14}
    };

    waveprintMatrix(v);

    return 0;

}