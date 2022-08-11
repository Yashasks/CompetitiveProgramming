class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)return i;
            else if(nums[i]>target)return i;
        }
        if(index!=0)return index;
        else return nums.size();
    }
};