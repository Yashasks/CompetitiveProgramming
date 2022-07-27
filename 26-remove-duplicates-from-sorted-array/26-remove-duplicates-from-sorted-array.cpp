class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=1;
        int right=1;
        int n=nums.size();
        int c=0;
        while(right<n){
            if(nums[right]==nums[right-1])
                right++;
            else 
            {
                nums[left]=nums[right];
                left++;
                right++;
                c++;
            }
        }
        
        return left;
        
    }
};