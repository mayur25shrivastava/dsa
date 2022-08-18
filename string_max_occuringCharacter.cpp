// to print max occuring character in string
using namespace std;

#include <iostream>


char maxOcc(string s){

    int arr[26] = {};

    // create array of count 
    for (int i = 0; i < s.length(); i++)
    {
        char ch;
        ch= s[i];

        int number;

        if(ch>='a' && ch<='z'){
            number= ch-'a';
        } 
        else{
            number= ch-'A';
        } 

        arr[number]++;
    }
}




int main(){
    string str;
    cout<<"Enter String:"<<endl;
    cin>>str;


    return 0;
}