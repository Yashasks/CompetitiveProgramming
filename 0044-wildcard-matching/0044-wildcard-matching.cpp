class Solution {
public:
    bool f(string &str, string &pattern, int i, int j, vector<vector<int>> &dp){
        if(i<0 and j<0)return true;
        if(j<0 and i>=0)return false;
        if(i<0 and j>=0){
            for(int ii=0;ii<=j;ii++)if(pattern[ii]!='*')return false;
            
            return true;
        }
       
        if(dp[i][j]!=-1)return dp[i][j];
        if(str[i]==pattern[j] or pattern[j]=='?')return dp[i][j]=f(str, pattern, i-1, j-1 ,dp);
        
       if(pattern[j]=='*')return dp[i][j]=f(str, pattern, i-1, j, dp) | f(str, pattern, i, j-1, dp);
        
        return dp[i][j]=false;
    }
public:
    bool isMatch(string str, string pattern) {
        int n=str.size();
        int m=pattern.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return f(str, pattern, n-1, m-1, dp);
    }
};