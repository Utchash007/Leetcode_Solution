class Solution {
    using ll= int;
public:
ll n,m;
ll dp[100][100][100];
ll dpf(ll i, ll j1, ll j2,vector<vector<int>>& v){
    if( j1<0 || j1>=m || j2<0 || j2>=m)return 0;
    if(i==n-1){
        if(j1==j2)return v[i][j1];
        else return v[i][j1]+v[i][j2];
    }

    if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];
    ll ans=-1e8;ll  ans1=0;
    for(ll x=-1; x<=1; x++){
        for(ll y=-1; y<=1; y++){
          ans1=0;
            if(j1==j2)ans1=v[i][j1];
            else ans1=v[i][j1]+v[i][j2];
            ans1+=dpf(i+1,j1+x,j2+y,v);
             ans=max(ans,ans1);
        }
       
    }

    return dp[i][j1][j2]=ans;

}
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        n=grid.size(); m=grid[0].size();
        return dpf(0,0,m-1,grid);
    }
};