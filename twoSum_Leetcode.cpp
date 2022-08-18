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
    int k;
    cout<<"enter tyarget:"<<endl;
    cin>>k;

    unordered_map<int,int> m;

    for (int i = 0; i < n; i++)
    {
        if(m.find(k-arr[i])!=m.end()){
            arr.push_back(m[k-arr[i]]);
            arr.push_back(i);

        }
        m[arr[i]]=i;

        cout<<arr[i]<<"\t";
    }
    // for (int i = 0; i < n; i++)
    // {
        
    // }
    
    





    return 0;
}