using namespace std;

#include<bits/stdc++.h>

int main(){


    int n;
    cout<<"enter n0o of elements:"<<endl;

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

    int f;
    cout<<"enter no whose frequency you wanna find:"<<endl;
    cin>>f;
    

    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==f){
            count++;
        }

    }
    cout<<count;
    


        


















    








    return 0;
}