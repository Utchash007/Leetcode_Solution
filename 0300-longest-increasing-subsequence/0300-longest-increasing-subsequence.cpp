class Solution {
public:
    vector<int> dp;

    int f(int i, vector<int>& a) {
        if (dp[i] != -1) return dp[i];
        int ans = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) ans = max(ans, f(j, a) + 1);
        }
        return dp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, -1); 
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, f(i, nums));
        }
        return ans;
    }
};
