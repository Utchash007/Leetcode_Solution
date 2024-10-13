class Solution {
public:
int dp[104][104];
int n,m;

int dpf(int i, int j, vector<vector<int>>& v){
    if(i<0 || j<0)return 0;
    if(v[i][j]==1)return 0;
    if(i==0 && j==0)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=dpf(i-1, j, v)+ dpf(i, j-1 ,v);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1, sizeof(dp));
        n=obstacleGrid.size(); m=obstacleGrid[0].size();
        return dpf(n-1, m-1, obstacleGrid);
    }
};