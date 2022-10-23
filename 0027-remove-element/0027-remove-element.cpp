class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        while(i<j){
            if(nums[j]==val)j--;
            else if(nums[i]==val){
                swap(nums[i], nums[j]);
                j--;
            }
            else{
                i++;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)break;
            
            count++;
            
        }
        return count;
        
    }
};