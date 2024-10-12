class Solution {
public:
    int dpo(int i, vector<int>& dp, vector<int>& v){
        if(i<=0)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans1=v[i];
        int ans2=ans1+dpo(i-2, dp, v);
        int ans3=dpo(i-1, dp, v);
        return dp[i]= max({ans1,ans2,ans3});
    }


    int dpi(int i, vector<int>& dp, vector<int>& v){
        if(i<0)return 0;
        
        if(dp[i]!=-1)return dp[i];
        int ans1=v[i];
        int ans2=ans1+dpi(i-2, dp, v);
        int ans3=dpi(i-1, dp, v);
        return dp[i]= max({ans1,ans2,ans3});
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        int ans=-1, n=nums.size();
       vector<int>dp1(n,-1); vector<int>dp2(n,-1);
       ans=max(dpi(n-2, dp1, nums), dpo(n-1, dp2, nums));
        
        return ans;
    }
};