class Solution {
public:

    int dpi(int i, vector<int>& dp, vector<int>& v){
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans1=v[i];
        int ans2=ans1+dpi(i-2, dp, v);
        int ans3=dpi(i-1, dp, v);
        return dp[i]= max({ans1,ans2,ans3});
    }
    int rob(vector<int>& nums) {
        int ans=-1, n=nums.size();
       vector<int>dp(n,-1);
       ans=dpi(n-1, dp, nums);
        
        return ans;
    }
};