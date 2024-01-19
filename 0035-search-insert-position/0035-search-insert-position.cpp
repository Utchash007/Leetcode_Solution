class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto u=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return u;
    }
};