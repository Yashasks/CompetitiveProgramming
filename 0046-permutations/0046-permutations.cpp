class Solution {
public:
    void f(vector<int> &nums, map<int, int> &m, vector<vector<int>> &ans, vector<int> &ds, int ind){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!m[nums[i]]){
                m[nums[i]]=1;
                ds.push_back(nums[i]);
                f(nums, m, ans, ds, ind+1);
                m[nums[i]]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        map<int, int>m;
        vector<vector<int> > ans;
        vector<int> ds;
        f(nums, m, ans, ds, 0);
        return ans;
    }
};