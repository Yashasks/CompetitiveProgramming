class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        set<int> ans;
        for(int i=0;i<nums2.size();i++){
            if(m[nums2[i]]>0)ans.insert(nums2[i]);
        }
        
        vector<int> a;
        for(auto i:ans)a.push_back(i);
        return a;
    }
};