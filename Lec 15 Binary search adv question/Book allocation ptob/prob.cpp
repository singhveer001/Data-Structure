

#include<iostream>
#include<vector>
using namespace std;

int IsPossible(vector<int> arr, int n ,int m , int mid){

    int pagesum=0;
    int stdCount=1;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        
        else{
            stdCount ++;
            if (stdCount>m || pagesum > mid)
            {
                return false;
            }
            pagesum = arr[i];
            
        }

    }
    return true;
    
}

int BookAllocation(vector<int> arr, int n ,int m){
    int start=0;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;

    int ans=0;
    int mid= start+ (end-start)/2;

    while (start<=end)
    {
        if(IsPossible(arr, n ,m ,mid)){

            ans=mid;// agar ye true hai to
            end=mid-1;
        }

        else{
            start=mid+1;
        }
        mid= start+ (end-start)/2;
    }
    return ans;
    
}






int main() {

    cout<<"enter value  of n:"<<endl;
    int n;
    cin>>n;

    cout<<"Enter value of m:"<<endl;
    int m;
    cin>>m;

    vector<int> arr(n);
    cout<<"enter your Value in Yor array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<" Yor Ans is: "<<" " <<BookAllocation(arr, n , m);
    
}




/*
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {

    cout<<"enter value  of n:"<<endl;
    int n;
    cin>>n;

    cout<<"Enter value of m:"<<endl;
    int m;
    cin>>m;

    vector<int> arr(n);
    cout<<"enter your Value in Yor array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<" Yor Ans is: "<<" " <<allocateBooks(arr, n , m);
    
}

*/
