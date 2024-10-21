class Solution {
public:
int dp[205][205];
int n,m;
    int dpf(int i, int j, vector<vector<int>>& v){
        if(i>n-1 || j>n-1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=v[i][j]+min(dpf(i+1,j,v), dpf(i+1,j+1,v));

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        n= triangle.size();  
        memset(dp,-1,sizeof(dp));
        return dpf(0,0, triangle);     
    }
};