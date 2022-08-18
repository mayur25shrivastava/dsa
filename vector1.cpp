using namespace std;
#include <iostream>

#include <vector>

int main(){

    int n;
    cout<<"enter no of element:"<<endl;
    cin>>n;
    int a;
    vector<int> v;

    
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i:v){
        cout<<i<<" ";
    }
 




    return 0;
}