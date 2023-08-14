#include<iostream>
using namespace std;

    int getmax(int array[],int size){
            int max=INT_MIN;
           for (int i = 0; i <size; i++)
           {
                if (array[i]>max)
            {
                max=array[i];
            }
           }
            
            return max;
            
    }

    int getmin(int array[],int size){
            int mini=INT_MAX;
            for (int i = 0; i < size; i++){
                
                if (array[i]<mini){
                mini=array[i];
            }
            }
            
            
            return mini;
            
    }

        int main(){
            cout<<"enter your size"<<endl;
            int size;
            cin>>size;
            
            int array[100];
            for (int i = 0; i < size; i++)
            {
                cin>>array[i] ;


            }
            cout<<"The max value is "<< getmax(array,size)<<endl;
            cout<<"The min value is "<< getmin(array,size)<<endl;

            cout<<"sum of min and max value: "<<getmax(array,size)+getmin(array,size)<<endl;
            
            return 0;
        }