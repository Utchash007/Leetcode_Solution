class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int>v(nums);//unnecessary
        return max({v[0]*v[1]*v[2], v[n-1]*v[n-2]*v[n-3],
                    v[0]*v[1]*v[n-1], v[n-1]*v[n-2]*v[0]});

    }
};

auto boom = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);
    return 0;
}();