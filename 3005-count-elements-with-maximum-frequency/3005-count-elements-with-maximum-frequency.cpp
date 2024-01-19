class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int z=0,x=0;
        for(auto &u:nums)++mp[u],z=max(mp[u],z);
        for(auto &u:mp)if(u.second==z)x+=u.second;
        return x;
        
    }
};