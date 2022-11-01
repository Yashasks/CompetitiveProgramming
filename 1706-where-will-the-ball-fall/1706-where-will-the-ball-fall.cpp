class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>res;
        int m = grid.size(), n = grid[0].size(), k= 0;
        for (int j=0; j<n; j++){
            k = j;
            for (int i=0; i<m ;i++){
                if ((k==0 && grid[i][k]==-1) || (k==n-1 && grid[i][k]==1)){
                    k = -1000;
                    break;
                }
                if (grid[i][k]==-1){
                    if (grid[i][k-1]==-1) k--;
                    else{
                        k = -1000;
                        break;
                    }
                }else{
                    if (grid[i][k+1]==1) k++;
                    else{
                        k = -1000;
                        break;
                    }
                }
            }
            if (k<0) res.push_back(-1);
            else res.push_back(k);
        }
        return res;
    }
};