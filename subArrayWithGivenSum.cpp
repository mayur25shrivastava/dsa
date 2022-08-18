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
    cout<<"subarray with given sum of given array is:"<<endl;

    //subarrays
    int sum;
    cout<<"enter value whose sum......"<<endl;
    cin>>sum;

    unordered_map<int,int> m;
    int cursum=0;
    int start=0;
    int end=-1;


    for (int i = 0; i < n; i++)
    {
        cursum=cursum+arr[i];

        if((cursum-sum)==0){
            start=0;end=i;
            break;
        }
        if(m.find(cursum-sum)){
            start=m.get_allocator(cursum-sum)+1;
            end=i;
            break;
        }
        m.insert(cursum,i);
    }
    if(end==-1){
        cout<<"not found"<<endl
    }
    else{
        cout<<"found at"<<start<<","<<end;
    }
    

    return 0;
}