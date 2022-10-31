class Solution {
public:
    void f(vector<int> &a, set<vector<int>> &s, int i, vector<int> &ds){
        if(i<0)
        {
            s.insert(ds);
            return;
        }
        
        
        //pick
        ds.push_back(a[i]);
        f(a, s,i-1, ds );
        ds.pop_back();
        //not pick
        f(a, s,i-1, ds );

        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        f(nums, s, nums.size()-1, ds);
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};