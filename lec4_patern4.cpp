using namespace std;
#include <iostream>

int main(){ 

    int n;
    cout<<"enter"<<endl;
    cin>>n;

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {   
            cout<<count;
            cout<<" ";
            count=count+1;

        }
        cout<<endl;
    }


    return 0;
    
}
