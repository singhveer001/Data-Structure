#include<iostream>
using namespace std;

int Binary_Search(int arr[], int size, int key){

    int start=0;
    int end=size-1;

   // int mid=(start+end)/2;     // ye bhi right hai par 10^31-1 vale condition me value jada badi ho jayegi
      int mid=start+(end - start)/2;          //ye upar vale ka extension hai
    
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        //Go to right vala part
        if (key>arr[mid])
        {
            start=mid+1;
        }
        //Go to left vala part
        // key < mid
        else{
            end=mid-1;
        }
       //  mid=(start+end)/2;  
           mid=start+(end - start )/2;   // Again we have to update the mid value
        
    }
    return -1;
    
    
}


int main(){

    int even[]={2, 4 ,5 , 8 ,23 ,24 };
    int odd[]={2,4 ,5,6,12};

   int even_index= Binary_Search(even,6,23);
   cout<<"index of 23 is: "<<even_index<<endl;
   
   int odd_index=Binary_Search(odd,5,5);
   cout<<"index of 5 is: "<<odd_index<<endl;
}