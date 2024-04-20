class Solution {
public:
using ll =long long int;
    vector<ll>dp;
    ll dpf(ll n){
        if(n<=0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=dpf(n-1)+dpf(n-2)+dpf(n-3);
    }


    int tribonacci(int n) {
        dp.resize(50,-1);
        dp[0]=0;dp[1]=1;dp[2]=1;
        return dpf(n);
    }
};