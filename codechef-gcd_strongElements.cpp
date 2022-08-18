using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int test=0;
    cin>>test;

    while(test--){
        int n=0;
        cin>>n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        vector<int> prefix_GCD(n);
        prefix_GCD[0]=v[0];

        for (int i = 1; i < n; ++i)
        {
            prefix_GCD[i] = __gcd(prefix_GCD[i-1],v[i]);
        }
        vector<int> suffix_GCD(n);
        suffix_GCD[n-1]=v[n-1];

        for (int i = n-2; i >= 0; --i)
        {
           suffix_GCD[i] = __gcd(suffix_GCD[i+1],v[i]);
        }
        int strong_Element=0;

        for (int i = 0; i < n; ++i)
        {
            if(i==0 && suffix_GCD[1]>1){
                strong_Element++;
            }
            else if(i==n-1 && prefix_GCD[n-2]>1){
                strong_Element++;
            }
            else if(__gcd(prefix_GCD[i-1],suffix_GCD[i+1])>1){
                strong_Element++;
            }
        }

        cout<<strong_Element<<endl;
        
        
        
    }

}