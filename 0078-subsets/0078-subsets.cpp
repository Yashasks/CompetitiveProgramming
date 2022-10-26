class Solution {
public:
    void f(vector<int> &nums, vector<vector<int>> &answer, int i, vector<int> &ds){
        if(i<0){
            answer.push_back(ds);
            return;
        }
        
        //pick
        ds.push_back(nums[i]);
        f(nums, answer, i-1, ds);
        ds.pop_back();
        f(nums, answer, i-1, ds);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ds;
        f(nums, answer, nums.size()-1, ds);
        return answer;
    }
};