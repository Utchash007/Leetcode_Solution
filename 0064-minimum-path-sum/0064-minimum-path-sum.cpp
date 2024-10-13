class Solution {
public:
int dp[205][205];
int dpf(int i, int j, vector<vector<int>>& grid){
    if(i<0 || j<0)return INT_MAX;
    if(i==0 && j==0)return grid[i][j];
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=grid[i][j]+min(dpf(i-1, j, grid), dpf(i, j-1, grid) );
    return dp[i][j]=ans;
}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        memset(dp,-1, sizeof(dp));
        return dpf(n-1, m-1, grid);
    }
};