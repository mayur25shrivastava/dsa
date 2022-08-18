using namespace std;
#include <iostream>

int main(){ 

    int n;
    cout<<"enter no"<<endl;
    cin>>n;

    int i=1;
    int j=1;
    
    while (i<=n)
    {
        while (j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }

}