using namespace std;
#include <iostream>

char lowCase(string s,int len){
   

    for (int i = 0; i < s.length(); i++)
    {
        char arr[30];
        char ch;
        ch=s[i];

        if (ch>='A' && ch<='Z')
        {
            char temp;
            temp=ch-'A'+'a';
            return temp;
        }
        else{
            return ch;
        }
            
        

    }

    
}

int main(){
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    
    cout<<"String in lowercase is"<<endl;
    lowCase(str,str.length());
    return 0;
}