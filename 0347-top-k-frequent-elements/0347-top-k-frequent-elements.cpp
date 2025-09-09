class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>v;map<int,int>mp;
        for(auto &u:nums){++mp[u];}
        for(auto &u:mp){v.push_back({u.first,u.second});}
        sort(v.begin(), v.end(), [](pair<int,int>a, pair<int,int>b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0; i<k; i++)ans.push_back(v[i].first);

        return ans;

    }
};
