class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if(s.size()<3)return *max_element(s.begin(), s.end());
        else {
            auto i=s.end();
            i--;
            i--;
            i--;
            return *i;
        }
    }
};