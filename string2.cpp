using namespace std;
#include <iostream>

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

    cout<<"Tumhara naam itne character ka tha "<<lengthofString(name);

    return 0;

}