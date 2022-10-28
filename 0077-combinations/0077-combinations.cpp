class Solution {
public:
    void f(int n, int k, int i, vector<vector<int>> &ans, vector<int> &ds){
        if(i>n){
            if(ds.size()==k)ans.push_back(ds);
            
            return;
        }
        //pick
        ds.push_back(i);
        f(n, k, i+1, ans, ds);
        ds.pop_back();
        //not pick
        f(n, k, i+1, ans, ds);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(n, k, 1, ans, ds);
        return ans;
        
    }
};