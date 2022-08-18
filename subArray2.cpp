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
    cout<<"subarray of given array is:"<<endl;

    //subarrays

    for (int i = 0; i < n; i++) //2, 2 , 5 ,6 ,4 
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k];
            }cout<<endl;
            
        }

    }


    return 0;
}