using namespace std;
#include <bits/stdc++.h>

int main(){

     int n;
    cout<<"enter no of elements:"<<endl;
    cin>>n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"your array is:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    // cout<<"subarray with given sum is : "<<endl;

    int sum;
    cout<<"enter no whose sum you wanna find"<<endl;
    cin>>sum;


     int curr_sum = arr[0], start = 0, i;
  
    /* Add elements one by one to curr_sum and 
    if the curr_sum exceeds the sum,
    then remove starting element */

        for (i = 1; i <= n; i++) {                   

                                                        //2 3 6 5 8 7 
                                                        //sum = 19
                                                        //cur_sum=2
                                                        //start=0


        // If curr_sum exceeds the sum,
        // then remove the starting elements

        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }
  
        // If curr_sum becomes equal to sum,
        // then return true

        if (curr_sum == sum) {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return 1;
        }
  
        // Add this element to curr_sum
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
  
    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;

}