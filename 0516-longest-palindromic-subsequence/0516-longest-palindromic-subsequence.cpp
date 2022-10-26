class Solution {
public:
    int f(string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
        if(i<0 or j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j])return 1+f(s1, s2, i-1, j-1, dp);
        
        return dp[i][j]=max(f(s1, s2, i-1, j, dp), f(s1, s2, i, j-1, dp));
    }
public:
    int longestPalindromeSubseq(string s) {
        string k=s;
        vector<vector<int>> dp(s.size()+1, vector<int>(k.size()+1, -1));
        reverse(k.begin(), k.end());
        return f(s, k, s.size()-1, k.size()-1, dp);
    }
};