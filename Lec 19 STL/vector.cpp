#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> a;   //vector creation
    cout<<"capacity: "<<a.capacity()<<endl;   //capacity check karna
    a.push_back(1);   // element dalna
    cout<<"capacity: "<<a.capacity()<<endl;
    a.push_back(2);
     //element nikal dega
     // a.pop_back(1);
    vector<int> b(5,1);

    vector<int> last(b);  // last name ka vector create ho gya jo b vector ki sari value lega

    int n=b.size();
    for (int i = 0; i < n; i++)
    {
        cout<<last[i]<<endl;
    }
    
}