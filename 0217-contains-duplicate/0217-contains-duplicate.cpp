class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool ok=true;
        // nums.push_back(INT_MAX);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])ok=false;
        }
        return !ok;
    }
};