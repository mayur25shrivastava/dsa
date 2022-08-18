// using namespace std;
// #include <bits/stdc++.h>


// int main(){

//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;

//     vector<int> arr;

//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin>>a;

//         arr.push_back(a);
//     }

    
//     int k;
//     cout<<"enter kth element:"<<endl;
//     cin>>k;

//     priority_queue<int> maxxheap;

//     for (int i = 0; i < n; i++)
//     {

//         maxxheap.push(arr[i]);

//         if(maxxheap.size()>k){
//                 maxxheap.pop();
//         }

//     }
    
//         cout<<"kth smallest elementttt is:";
//         cout<<maxxheap.top();
//     }

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int> maxxheap;
        
        for (int i = 0; i < r-1; i++)
        {
    
            maxxheap.push(arr[i]);
    
            if(maxxheap.size()>k){
                    maxxheap.pop();
            }
    
        }
        
        
        
        //code here
        return maxxheap.top();
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cout<<"enter no of elementS:"<<endl;
        cin>>number_of_elements;
        int a[number_of_elements];
        

        cout<<"enter elements:"<<endl;
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cout<<"enter k:"<<endl;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


