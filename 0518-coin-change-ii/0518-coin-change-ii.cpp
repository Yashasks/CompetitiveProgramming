class Solution {
public:
    int f(vector<int> &coins, int amount, int i, vector<vector<int>> &dp){
        if(amount==0)return 1;
        if(i<0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        //pick condition
        int pick=0;
        if(coins[i]<=amount){
            pick=f(coins, amount-coins[i], i, dp);
        }
        
        //not pick condition
        int not_pick=f(coins, amount, i-1, dp);
        return dp[i][amount]=pick+not_pick;
        
        
    }
    int change(int amount, vector<int>& coins) {
        //initialize dp array of size dp[n][amount] with -1 
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        
        return f(coins, amount, coins.size()-1, dp);
    }
};