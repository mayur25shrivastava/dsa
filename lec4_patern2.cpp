using namespace std;
#include <iostream>

int main(){ 

   

    int n;
    cout<<"enter"<<endl;
    cin>>n;

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
    return 0;
    
}
