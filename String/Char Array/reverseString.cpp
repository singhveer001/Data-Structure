#include<iostream>
using namespace std;

int getLength(char ch[],int size){
    int length =0;
    for(int i =0; i<size; i++){
        if(ch[i] == '\0'){
            // element end here
            break;
        }
        else{
            length++;
        }
    }
      return length;
}

void reverseString(char ch[], int size){
    int start = 0;
    int end = size-1;
    while (start <= end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--; 
    }
    
}

int main(){
    char ch[100];
    cin>> ch ;

    cout<<"Before Reverse : " << ch << endl;
    int length = getLength(ch,100); // Finding length of input 

     reverseString(ch,length);
    cout<<"After Reverse : "<< ch << endl;

}