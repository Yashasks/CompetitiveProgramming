class Solution {
public:
    int result=0;
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            result=result^nums[i];
        }
        return result;
    }
};