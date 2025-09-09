class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           long long int ans=1; int flag=0;
            for(auto &u:nums){if(u!=0){ans*=u;} 
            else{flag++;}}
            for(auto &u:nums){
                if(u==0){
                    if(flag>1)u=0;
                    else u=ans;
                }
                else {
                    if(flag)u=0;
                    else u=ans/u;
                };
            }
            return nums;
    }
};
