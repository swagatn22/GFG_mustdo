//TOP_DOWN APPROACH
#include <bits/stdc++.h>
using namespace std;
int knapsack(vector<int> &val,vector<int>&wt,vector<vector<int>>&dp, int n,int w){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < w; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else{
                if(wt[i-1] <= j){
                    dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    
    return dp[n-1][w-1];
}

