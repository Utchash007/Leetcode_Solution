class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>st; int n=nums.size();
        vector<int>v;
        for(int i=0; i<n; i++){
            int l=i+1,r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    v.push_back(nums[i]);
                     v.push_back(nums[l]);
                      v.push_back(nums[r]);
                      st.insert(v); v.clear();
                      ++l,--r;

                }else if(nums[i]+nums[l]+nums[r]>0)--r;
                else ++l;
            }
        }
        vector<vector<int>>ans;
        for(auto &u:st)ans.push_back(u);
        return ans;
    }
};