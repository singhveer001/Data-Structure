/*

#include<iostream>
#include<vector>
using namespace std;

Vector<int> WavePrint(vector<vector<int>> arr, int nRow , int mCol){
     vector<int> ans;

     for(int col=0; col<mCol; col++){

        if(col & 1){

            //Odd index --> Bottom to top

            for(int row=nRow-1; row>=0; row--){
                // cout<<arr [row] [col];
                ans.push_back(arr [row] [col]);
            }
        }
        else{

            // 0 or Even Index --> from top to bottom
              for(int row=0; row<nRow; row++){
                // cout<<arr [row] [col];
                ans.push_back(arr [row] [col]);
            }
        }
     }
     return ans;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

     for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    WavePrint()

}

*/