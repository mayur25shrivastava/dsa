
#include<iostream>
using namespace std;


 int getArray(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     
 }
 int printArray(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
         
         cout<<arr[i]<<endl;
     }
     
 }

int maxElement(int arr[],int n){
    int Min=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>Min)
        {
            Min=arr[i];

            i++;
        }
        
    }
            cout<<Min;
    
}
int minElement(int arr[],int n){
    int Max=100000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<Max)
        {
            Max=arr[i];

            i++;
        }
        
    }
            cout<<Max;
}

int main() {

    int size;
    cout<<"enter size:"<<endl;
    cin >> size;

    int array[100];

    getArray(array,size);
    cout<<"array is:"<<endl;
    printArray(array,size);
    cout<<"Max is"<<endl;
    maxElement(array,size);

    minElement(array,size);
    
    return 0;
}