class Solution {
public:
int dp[10005];
int dpf(int baki, vector<int>& coins){
    if(baki==0)return 0;
    if(baki<0)return INT_MAX;
    if(dp[baki]!=-1)return dp[baki];

    int ans=INT_MAX;
    for( auto &c:coins){
        if(baki<c)break;
        int sub=dpf(baki-c,coins);
        if(sub!=INT_MAX)ans=min(ans,1+sub);
    }
    return dp[baki]=ans;

}
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        memset(dp,-1,sizeof(dp));
        int ans= dpf(amount,coins);
        return (ans==INT_MAX)? -1: ans;
    }
};