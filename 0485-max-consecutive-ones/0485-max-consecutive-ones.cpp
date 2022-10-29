class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)c++;
            else c=0;
            
            m=max(m, c);
            
        }
        return m;
    }
};