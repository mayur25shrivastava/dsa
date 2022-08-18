// palindrome 

using namespace std;
#include <iostream>


char upperCase(char ch){

    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool chkPalindrome(char arr[],int n){
    int s=0;
    int e=n-1;

    while(s<=n){
        if(arr[s] == arr[e]){
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
// bool chkPalindrome(char arr[],int n){
//     int s=0;
//     int e=n-1;

//     while(s<=n){
//         if(arr[s] != arr[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

void reverseString(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int lengthofString(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
        /* code */
    }

    return count;
    
}



int main(){

    char name[50];
    cout<<"name batao apna!!!"<<endl;
    cin>>name;

    cout<<"Tumne Naam Bataya Tha "<<name<<endl;

    cout<<"Tumhara naam itne character ka hai "<<lengthofString(name)<<endl;

    // cout<<"reverse name is ";
    int len=lengthofString(name);

    // reverseString(name,len);

    // cout<<name;

    
    cout<<"it is palindrome or not, Lets check!!!"<<chkPalindrome(name,len)<<endl;

    cout<<"character is :"<<upperCase('K')<<endl;


    return 0;

}