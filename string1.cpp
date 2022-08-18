using namespace std;
#include <iostream>


  int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
      count++;
      /* code */
    }
    return count;
    

  }

  int main(){

    char ch[10];

    cout<<"enter your name"<<endl;
    cin>>ch;

    cout<<"name is "<<endl;
    cout<<ch;

    cout<<"length of name is "<<getLength(ch);



      return 0;
  }