class Solution {
public:
    template <typename T>
    static bool cmp(const T& a, const T& b) {
        return a.second < b.second;
    }

    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto &u : nums) mp[u]++;
        auto p = max_element(mp.begin(), mp.end(), cmp<pair< int, int>>);
        return p->first;
    }
};
