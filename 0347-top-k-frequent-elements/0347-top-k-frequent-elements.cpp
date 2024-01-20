class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto &u:nums)mp[u]++;
        vector<pair<int,int>>p(mp.begin(),mp.end());
        sort(p.begin(),p.end(),[](const auto &a,const auto &b){return a.second>b.second;});
        int i=0;
        while(i<k){
            v.push_back(p[i].first);
            i++;
        }
        return v;
    }
};