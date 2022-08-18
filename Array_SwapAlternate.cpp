// swap alternate 

using namespace std;
#include <iostream>

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
int uniqueElement(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;
    
}


int swapAlternate(int arr[],int num)
{   
    for (int i = 0; i < num; i++)
    {
        if(i+1<num){

            swap(arr[i],arr[i+1]);
        }

    }
    
}

bool unoqueOccurences(int arr[],int n){
    int numb=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]^numb == 0){
            numb++;
        }
        
    }
    return numb; 
}


int main(){


    int arr[100] ;
    
    int num;
    cout<<"enter number of element:"<<endl;
    cin>>num;

    cout<<"enter array elements"<<endl;
    getArray(arr,num);

   
    cout<<"your array elements are : ";
    printArray(arr,num);

    cout<<endl;
    // cout<<"your array elements after swaping are"<<endl;

    // swapAlternate(arr,num);
    // printArray(arr,num);
    cout<<"unique element are: "<<endl;
    uniqueElement(arr,num);

    cout<<endl;

    cout<<"Unique Occurences:"<<"\t";
    unoqueOccurences(arr,num);
   


    
    return 0;
}