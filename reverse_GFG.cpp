using namespace std;
#include <bits/stdc++.h>

int main(){

    int n;
    cout<<"no of elements"<<endl;
    cin>>n;

    cout<<"enter values:"<<endl;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    cout<<"your array is:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\n";

    cout<<"reverse array is"<<endl;

    vector<int> arr2;

    for (int i = 0; i < n; i++)
    {
        
        cout<<arr.back()<<"\t";
        arr.pop_back();

    }



}