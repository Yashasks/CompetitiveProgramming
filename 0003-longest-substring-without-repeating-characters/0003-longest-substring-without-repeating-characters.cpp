class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int l=0, r=0;
        int c=0, maxi=0;
        while(r<s.size() and l<s.size()){
            if(m[s[r]]>0){
                
                m[s[l]]--;
                l++;
                c--;
            }
            else{
                c++;
                m[s[r]]++;
                r++;
            }
            maxi=max(maxi, c);
        }
        return maxi;
    }
};