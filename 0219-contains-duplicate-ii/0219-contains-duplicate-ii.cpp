class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=1; i<=k;i++)
        for(int j=0; j+i<nums.size(); j++)
        if(nums[j]==nums[i+j])return true;
        return false;
        //beated memory not time
    }
};
auto boom = [](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();