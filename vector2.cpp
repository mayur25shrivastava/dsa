using namespace std;
#include <iostream>
#include <vector>

int main(){

    vector<int> arr;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;

        arr.push_back(a);
    }

    for (int i:arr )
    {
        cout<<i<<" ";
    }
    

    

    return 0;
}