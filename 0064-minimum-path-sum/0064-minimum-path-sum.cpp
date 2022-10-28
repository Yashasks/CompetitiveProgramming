class Solution {
public:
    int f(vector<vector<int>>&grid, int i, int j, vector<vector<int>>&dp){
        if(i<0 or j<0)return 1e8;
        if(i==0 and j==0)return grid[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=min(grid[i][j]+f(grid, i, j-1, dp), grid[i][j]+f(grid, i-1, j, dp));
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return f(grid, grid.size()-1, grid[0].size()-1, dp);
        
    }
};