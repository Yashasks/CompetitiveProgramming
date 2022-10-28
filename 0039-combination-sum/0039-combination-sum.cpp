class Solution {
   
public:
    void f(vector<int> &candidates, int t, int i, vector<int> &ds, vector<vector<int>>&ans, int n){
        if(t==0){
            ans.push_back(ds);
            return;
        }
        if(i<0)return;
        //not pick
        f(candidates, t, i-1, ds, ans, n);
        //pick
        if(candidates[i]<=t){
            ds.push_back(candidates[i]);
            f(candidates, t-candidates[i], i, ds, ans, n);
            ds.pop_back();
        } 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> ds;
        vector<vector<int>> ans;
         f(candidates,target, n-1, ds, ans, n); 
        return ans;
    }
};