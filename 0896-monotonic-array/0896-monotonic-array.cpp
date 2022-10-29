class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ok1=true;
        bool ok2=true;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                
            }
            else {
                ok1=false;
                break;
            }
        }
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                
            }
            else {
                ok2=false;
                break;
            }
        }
        return ok1 or ok2;
    }
};