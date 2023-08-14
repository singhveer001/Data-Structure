#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int , int> v= {1,3};
    cout<< v.first << " " << v.second <<endl;

    pair< int , pair<int , int> > h ={3, {5,7}};

    cout<< h.first <<" ( " << h.second.first <<" " << h.second.second << " ) " <<endl ;


    pair<int , int > arr[] = { {3,5}, {7,8 }, {10, 13 }};
    cout<< arr[2].second <<" " <<arr[1].first ;
}