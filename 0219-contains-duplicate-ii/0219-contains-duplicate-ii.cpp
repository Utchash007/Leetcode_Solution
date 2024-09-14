class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,bool>ase; map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            if(ase[nums[i]]){
                if(abs(mp[nums[i]]-i)<=k)return true;
            }
            ase[nums[i]]=1; mp[nums[i]]=i;
        }
        return false;
        
    }
};
auto boom = [](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();