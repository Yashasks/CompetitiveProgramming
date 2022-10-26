class Solution {
public:
    int f(vector<int>&nums, int i, int prev, int n, vector<vector<int>> &dp){
        if(i==n)return 0;
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        int nt=0+f(nums, i+1, prev, n, dp);
        //take condition
        if(prev==-1 or nums[i]>nums[prev]){
            nt=max(nt, 1+f(nums, i+1, i, n, dp));
        }
        return dp[i][prev+1]=nt;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return f(nums, 0, -1, n, dp);
    }
};