using namespace std;
#include<bits/stdc++.h>

int main(){

    vector<int> arr;
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    cout<<"enter elements of array:"<<endl;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"your array elements are:"<<endl;

    for(auto m:arr){
        cout<<m<<"\t";
    }

    int k;
    cout<<"enter value whose difference you need to find count of all pairs of distinct element:"<<endl;
    cin>>k;

    unordered_map<int,int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    
    



    return 0;
}