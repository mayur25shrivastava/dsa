using namespace std;
#include <bits/stdc++.h>

int main(){

     int n;
    cout<<"enter no of elements:"<<endl;
    cin>>n;

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
    cout<<endl;
    cout<<"unique elements of given array is:"<<endl;

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;
    
   
    return 0;
}