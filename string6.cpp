using namespace std;
#include <iostream>


bool chkPalindrome(int num[],int size){
    int s=0;
    int e=size-1;

    while(s<=e){
        if(num[s]==num[e]){
            s++;
            e--;
            return 1;
        }
        else{
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int num[30];
    int size;

    cout<<"enter length"<<endl;
    cin>>size;

    cout<<"Enter no.:"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    cout<<"your no is:"<<endl;

     for (int i = 0; i < size; i++)
    {
        cout<<num[i];
    }
 

    cout<<"palindrome is:"<<endl;

    chkPalindrome(num,size);
    return 0;
}