class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>m, n;
        set<int> s;
        vector<vector<int>> a;
        for(auto i: nums1)m[i]++;
        for(auto i: nums2)n[i]++;
        
        for(auto i: nums1){
            if(n.find(i)==n.end()){
                s.insert(i);
            }
            
        }
        vector<int> v;
        for(auto i:s)v.push_back(i);
        a.push_back(v);
        v.clear();
        s.clear();
        for(auto i: nums2){
            if(m.find(i)==m.end()){
                s.insert(i);
            }
            
        }
      
        for(auto i:s)v.push_back(i);
        a.push_back(v);
        return a;
    }
};