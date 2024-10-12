class Solution {
public:
    using ll = long long int;
    ll dp[2000];
    ll dpf(ll n, vector<int>& cost){
        if(n<0)return 0;
        if(n==0 || n==1)return cost[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=cost[n]+min(dpf(n-1,cost),dpf(n-2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        return min(dpf(cost.size()-1,cost), dpf(cost.size()-2,cost)  );
    }
};