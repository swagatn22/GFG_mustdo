#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>dp(n+1,0);
	    dp[0] = 1;
	    dp[1] = 1;
	    for(int i = 2; i <= n; i++){
	        for(int j = 1; j <= i; j++){
	            dp[i] = dp[i] + (dp[j-1]*dp[i-j]);
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
