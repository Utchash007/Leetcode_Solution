class Solution {
public:
   int dp[46];
    int dpf(int n){
        if(dp[n]!=-1)return dp[n];
        return dp[n]=dpf(n-1)+dpf(n-2);
    }

    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp) );
        dp[0]=1,dp[1]=1;
        
        int ans=dpf(n);
        cout<<ans;
        return ans;
    }
};