class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        // vector<vector<double>> dp(n+1, vector<double>(m+1, -1));
        vector<double> prev(m+1, 0), cur(m+1, 0);
        
//         for(int i=0;i<=m;i++)dp[0][i]=0;

//         for(int i=0;i<=n;i++)dp[i][0]=1;
        
        prev[0]=cur[0]=1;
        //recurrence
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1])cur[j]=prev[j]+prev[j-1];
                else cur[j]=prev[j];
            }
            prev=cur;
        }
        return prev[m];

    }
};