// using namespace std;
// #include <iostream>



// int printArray(int arr[],int size){
//    for (int i = 0; i < size; i++)
//    {
//     //   cout<<"array is"<<endl;
//       cout<<arr[i]<<endl;
//    }
   
// }

// int main(){


//     int arr[100] = {2,5,6,9,8,12,1,4,23};

//     int n=9;
//     cout<<"the array before  is:"<<endl;

//     for (int i = 0; i < n; i+2)
//     {   
//         if ((i+1)<n)
//         {
//             swap(arr[i],arr[i+1]);
//             // int c=0;

//         }
        
//     }

//     cout<<"the array is:"<<endl;

//      printArray(arr,9);
    

// }


using namespace std;
#include <iostream>




void swapAlternate(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}


int printArray(int arr[],int size){
   for (int i = 0; i < size; i++)
   {
    //   cout<<"array is"<<endl;
      cout<<arr[i]<<endl;
   }
   
}


int main(){
    int even[8] = {14,25,6,95,10,3};
    int odd[5] = {12,5,8,66,34};


    printArray(even,8);

    swapAlternate(even,8);

    cout<<"after swaping"<<endl;
    printArray(even,8);
}
