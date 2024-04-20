
class Solution {
public:
  static const int mxs=10000+2;
    int dp[mxs];
    int dpf(int n){
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int mini=INT_MAX;
        for(int i=1; i*i<=n; i++){
            int x=i*i;
            int ans=1+dpf(n-x);
            mini=min(ans,mini);
        }
        return dp[n]=mini;

    }

    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return dpf(n);
    }
};