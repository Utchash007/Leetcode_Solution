class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre_mul(nums);
        vector<int>sub_mul(nums);
        for(int i=0; i<n-1; i++)pre_mul[i+1]*=pre_mul[i];
        for(int i=n-2; i>=0; i--)sub_mul[i]*=sub_mul[i+1];
        vector<int>v(n,1);
        for(int i=0; i<n; i++){
            if(i==0)v[i]*=sub_mul[i+1];
            else if(i==n-1)v[i]*=pre_mul[i-1];
            else v[i]*=pre_mul[i-1]*sub_mul[i+1];
        }
        return v;
    }
};