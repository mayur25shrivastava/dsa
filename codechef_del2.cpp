#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int ab,bc,cd;
	    cin>>ab>>bc>>cd;
	    
	    int rem;
	    rem =ab/bc;
	    
	    int quo;
	    quo=ab%bc;

	
	    
	    int chk;
	   chk =rem+quo;
	    
	    int ans;
	    ans=chk*cd;
	    
	    cout<<ans<<endl;
	    
	    
	    
	}
	return 0;
}
