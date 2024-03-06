class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int cur_sum=0,max_sum=0;
        for(auto &u:nums){
            cur_sum=max(cur_sum+u,u);
            max_sum=max(cur_sum,max_sum);
        }
        return max_sum;
    }
};