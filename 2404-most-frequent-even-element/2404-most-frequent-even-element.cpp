class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       map<int,int>mp;
       for(auto &u:nums)mp[u]++;
       int z=-1,freq=0;
       for(auto &u:mp){
           if(!(u.first&1)){
               if(u.second==freq){if(z==-1)z=u.first;else z=min(u.first,z);}
               else if(u.second>freq){z=u.first;freq=u.second;}
           }
       }
       return z;
    }
};
