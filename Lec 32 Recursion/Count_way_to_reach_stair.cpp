// Code studio

#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(long nStairs) {
        if (nStairs == 0) // base case if we reach here we have successfully reached bottom
            return 1;

        if (nStairs < 0) // if we reached here negative value has arrived
            return 0;

        //Recurrence Relation
        int ans = countDistinctWayToClimbStair(nStairs - 1) +  countDistinctWayToClimbStair(nStairs - 2);

        return ans;
    }

int main(){
    int nStairs;
    cin>>nStairs;

    countDistinctWayToClimbStair(nStairs);
    cout<< countDistinctWayToClimbStair(nStairs) << endl;
}