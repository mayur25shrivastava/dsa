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


    //  2 sum problem problem 
    // [2,4,5,8,3,-5,4,2] ---> sum = 13 find indices ???
    // 13-2 ----> 1 = 11
    // 13-4-----> 2 = 9
    // 13-5-----> 3 = 8
    // 13-3-----> 4 = 10
    // 13+5-----> 5 = 18
    // 13-4-----> 6 = 9
    // so required indeces is from [1,5] 


    int sum;
    cout<<"enter sum:"<<endl;
    cin>>sum;
    unordered_map<int,int> m;

    int cursum;
    for (int i = 0; i < n; i++)
    {
        cursum=sum+arr[i];

        if(m.find(cursum)!=m.end()){
            cout<<"pair with given sum "<<sum<<" found in indices"<<arr[i]<<","<<cursum<<endl;
        }
        // m.insert(arr[i]);


    }
    


    
    










    return 0;
}