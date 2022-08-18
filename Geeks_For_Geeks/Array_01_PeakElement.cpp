using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int getArray(int array[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {   
        cin>>array[i];

        // ans=ans^array[i];

        // cout<<"unique element is: "<<ans<<endl;
    }   
    
}

int printArray(int array[],int n){
    for (int i = 0; i < n; i++)
    {   
        cout<<array[i]<<"\t";

    }
    
}

int largestElement(int arr[],int n){
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxi){    
            maxi=arr[i];
            
        }
    }
        cout<<"largest element is: "<<maxi;

    


}

    // int maxi=INT_MIN;
    // int mini=INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]>maxi){    
    //         maxi=arr[i];
            
    //     }
    //     else if(arr[i]<mini){
    //         mini=arr[i];
    //     }
    // }
    // return [mini,maxi];
int main(){


    int arr[100] ;
    
    int num;
    cout<<"enter number of element:"<<endl;
    cin>>num;

    cout<<"enter array elements"<<endl;
    getArray(arr,num);

   
    cout<<"your array elements are : "<<endl;
    printArray(arr,num);

    largestElement(arr,num);

    return 0;
}