class Solution {
public:
int dp[102][102];
int dpf(int i, int j){
    if(i==0 && j==0)return 1;
    if(i<0|| j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=dpf(i-1,j)+dpf(i, j-1);
}

    int uniquePaths(int m, int n) {
        memset(dp,-1, sizeof(dp));
        return dpf(m-1,n-1);
    }
};