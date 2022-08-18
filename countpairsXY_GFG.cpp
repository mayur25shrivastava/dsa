// naive approach 

/*using namespace std;
#include<bits/stdc++.h>
#include <unordered_map>

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

    cout<<"your elements of array:"<<endl; 

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    int x,y;
    cout<<"enter x and y:"<<endl;
    cin>>x>>y;

    int k;
    cout<<"enter k:"<<endl;
    cin>>k;

    int count=0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cur_sum = arr[i] * x
                          + arr[j] * y;

            if(cur_sum==k){
                count++;
            }
        }
        
    }

    cout<<"pairs are : "<<count;

}
*/





// better solution 

using namespace std;
#include<bits/stdc++.h>
#include <unordered_map>

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

    cout<<"your elements of array:"<<endl; 

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    int x,y;
    cout<<"enter x and y:"<<endl;
    cin>>x>>y;

    int k;
    cout<<"enter k:"<<endl;
    cin>>k;

    int count=0;

    


    cout<<"pairs are : "<<count;

}
