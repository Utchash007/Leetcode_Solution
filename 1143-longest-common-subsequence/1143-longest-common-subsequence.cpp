class Solution {
    using ll =int;
public:
    int longestCommonSubsequence(string s, string p) {
       int n=s.size(),m=p.size();
       s="*"+s;p="*"+p;
       ll dp[n+1][m+1];memset(dp,0,sizeof(dp));
       for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            ll milse=(s[i]==p[j])?1+dp[i-1][j-1]:0;
            ll not_milse=max(dp[i][j-1],dp[i-1][j]);
            dp[i][j]=max(milse,not_milse);
        }
       }
        //cout<<dp[n][m]<<n1;
        ll ans=dp[n][m];
        ll i=n,j=m;string lcs="";
        return ans;
    }
};