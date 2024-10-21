class Solution {
using ll = long long int;
public:
 ll dp[105][105];
ll n,x;
ll dpf(ll i, ll j, vector<vector<int>>& v){
    if (j<0 || j>=n) return INT_MAX;
    if (i == 0) return v[0][j];
    if (dp[i][j] != x) return dp[i][j];
    ll ans = v[i][j] + min(min(dpf(i - 1, j - 1, v), dpf(i - 1, j, v)), dpf(i - 1, j + 1, v));
    cout<<ans<<"\n";
    return dp[i][j] = ans;
}

    int minFallingPathSum(vector<vector<int>>& matrix) {
        n=matrix[0].size();ll ans=1e7; x=-1e9+1;
       for(int i = 0; i < 105; i++)
        for(int j = 0; j < 105; j++)
            dp[i][j] = x;
        for(int i=0; i<n; i++)  {
            ans=min(dpf(n-1, i, matrix), ans );
        }   
        return ans;
    }
};