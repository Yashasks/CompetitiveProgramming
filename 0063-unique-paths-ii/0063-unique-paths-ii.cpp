class Solution {
public:
    int f(vector<vector<int>> &grid, int i, int j, vector<vector<int>>&dp){
        
        if(i<0 or j<0 or grid[i][j]==1)return 0;
        if(i==0 and j==0){
            
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=f(grid, i-1, j, dp)+f(grid, i, j-1, dp);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        return f(obstacleGrid, obstacleGrid.size()-1, obstacleGrid[0].size()-1, dp);
    }
};