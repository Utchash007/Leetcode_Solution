class Solution {
   using ll= long long int ;
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)return 1;
        ll n=s.size(), m=t.size();
        vector< vector<ll>>dp(n+1, vector<ll>(m+1,0));
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=m; j++){
                if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
        //cout<<dp[n][m];
        return dp[n][m]==n;
    }
};