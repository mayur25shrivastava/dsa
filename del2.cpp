#include <iostream>
using namespace std;
#include <vector>
// #include <string>    
#define int long long

int solve(){
    const int M=1e9 * 7;
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<vector<int>> dp(n+1,vector<int>(7));
    dp[0][0]=1;
    for(int i=0;i<n;i++){

        int l=(int)to_string(a[i]).size();
        int p=1;
        while(l--)
            p*=10;
            
        for(int j=0;j<7;j++){
            int use = (j*p+a[i])%7;
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) %M;
            dp[i+1][use]=(dp[i+1][use] + dp[i][j] ) %M;
            
        }
    }


cout<<(dp[n][0] - 1 + M)%M<<"\n";
return 0;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
    
}
    

