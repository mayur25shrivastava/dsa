// reversing string 

using namespace std;


#include <iostream>

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

    cout<<"reverse name is ";
    int len=lengthofString(name);

    reverseString(name,len);

    cout<<name;

    return 0;

}