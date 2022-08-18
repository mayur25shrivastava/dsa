using namespace std;
#include <iostream>

int main(){ 
    int n;
    cout<<"enter no: "<<endl;
    cin>>n;

    int i=2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"not primee";
        }
        else{
            cout<<"is prime";
        }
        i=i+1;
        
    }
    




}