class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        
            int i=0,j=0,replace=0;
            while(j<nums.size()){
                if(nums[j]==1)++j;
                else if(replace<k)++replace,++j;
                else if(nums[i]==1)++i;
                else ++i,replace--;
                ans=max(ans,j-i);
            }
       
        return ans;
    }
};