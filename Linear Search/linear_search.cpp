#include<iostream>
using namespace std;

int main(){

   
    int array[]={3 , 9 ,18 ,11 ,7};
    int key;
    cin>>key;
    int ans=-1;

    for (int i = 0; i < 5; i++)
    {
        if (array[i]==key){
            ans=i;
        }
       
        
    }
    cout<<ans<<endl;
    return 0;
}