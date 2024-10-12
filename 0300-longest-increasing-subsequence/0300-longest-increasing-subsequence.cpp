class Solution {
public:
    int dp[2505];
    int dpf(int idx, vector<int>& nums){
        if(dp[idx]!=-1)return dp[idx];
        int ans=1;
        for(int i=0; i<idx; i++){
           if(nums[idx]>nums[i]) ans=max(ans, 1+dpf(i, nums));
        }
        return dp[idx]=ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<nums.size(); i++)ans=max(ans, dpf(i,nums));
        return ans;
    }
};