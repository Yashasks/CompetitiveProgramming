class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto i: nums)m[i]++;
        
        int k=0;
        int j=-1;
        for(auto i: m){
            if(i.second>j)k=i.first, j=i.second;
        }
        return k;
    }
};