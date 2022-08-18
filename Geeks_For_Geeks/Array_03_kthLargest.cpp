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

int kthLargest(int arr[],int n){
    
}

int main(){


    int arr[100] ;
    
    int num;
    cout<<"enter number of element:"<<endl;
    cin>>num;

    cout<<"enter array elements"<<endl;
    getArray(arr,num);

   
    cout<<"your array elements are : "<<endl;
    printArray(arr,num);

    // largestElement(arr,num);
    cout<<endl<<"reversed array is \t"<<endl;
    // reverseArray(arr,num);
    // printArray(arr,num);

    kthLargest(arr,num);

    


    return 0;
}