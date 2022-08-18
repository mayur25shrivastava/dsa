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

    cout<<"we have to count frequency of all elements using hashing:"<<endl;

    map<int,int> m;
                                                                // 2 1 5 4 4 5 6 2 1 2
                                                                //
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }


    map<int,int> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    








}