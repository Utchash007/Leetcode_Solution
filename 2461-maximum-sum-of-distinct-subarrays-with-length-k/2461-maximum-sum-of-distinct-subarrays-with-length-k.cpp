class Solution {
    using ll= long long;
public:
    long long maximumSubarraySum(vector<int>& v, int k) {
        map<ll,ll>mp;ll n=v.size();ll sum=0,tmp=0;
        for(ll i=0,j=0; j<n; j++){
            mp[v[j]]++;tmp+=v[j];
            while(mp[v[j]]>1){mp[v[i]]--;tmp-=v[i];  i++;}
            if(k==j-i+1){sum=max(sum,tmp);mp[v[i]]--;tmp-=v[i]; i++;}
        }
        return sum;
}
};