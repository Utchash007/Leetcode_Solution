class Solution {
    using ll= int;
public:
  ll dp[200+1][200*100+1];
  bool dpf(ll i,ll tar,vector<int>& v){
      if(tar==0)return 1;
      if(i==0)return(v[0]==tar);
     if(dp[i][tar]!=-1)return dp[i][tar];
      bool not_take=dpf(i-1,tar,v);
      bool take =0; if(v[i]<=tar)take=dpf(i-1,tar-v[i],v);
      //cout<<(take|| not_take)<<" ";
      return dp[i][tar]=(take| not_take);
  }
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        ll n=nums.size(); ll m=0; for(auto &u:nums)m+=u;
        if(m&1)return false;
        return dpf(n-1,m/2,nums);
    }
};