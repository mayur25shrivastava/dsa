using namespace std;
#include <iostream>

int getArray(int arr[],int size){
   for (int i = 0; i < size; i++)
   {
      cin>>arr[i];
   }
}

int printArray(int arr[],int size){
   for (int i = 0; i < size; i++)
   {
      cout<<"array is"<<endl;
      cout<<arr[i]<<endl;
   }
   
}
int main(){

   int array[100];
   int n;
   cin>>n;

   getArray(array,n);

   printArray(array,n );
}