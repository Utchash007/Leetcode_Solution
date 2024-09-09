class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.resize(unique(nums.begin(),nums.end()) -nums.begin());
        int count=1,tmp=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i]==1){
                ++tmp;
                count=max(tmp,count);
            }else{
                tmp=1;
                count= max(tmp,count);
            }
        }
        return count;
    }
};