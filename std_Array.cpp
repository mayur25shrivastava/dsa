#include <iostream>
using namespace std;
#include <array>
#include <vector>


int main(){

    
    // array<int,4> arr;

    // int size=arr.size();
    // cout<<"length is:"<<size<<endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    
    // cout<<"array at 2nd indec is:"<<arr.at(2);

    vector<int> a;

    cout<<"capacity : "<<a.capacity()<<endl;

    a.push_back(5);
    cout<<"capacity : "<<a.capacity()<<endl;
    cout<<"size : "<<a.size()<<endl;


    return 0;
}