class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)return ;
        for(int i=0; i<nums.size(); i++){
            bool is=1;
            for(int j=0; j<nums.size()-i-1; j++){
                if(!nums[j]){swap(nums[j],nums[j+1]);is=0;}
            }
            if(is)break;
        }

       
    }
};