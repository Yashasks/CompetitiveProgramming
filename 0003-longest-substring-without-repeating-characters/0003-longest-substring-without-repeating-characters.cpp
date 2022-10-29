class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int left=0;
        int right=0;
        //count variable to keep track count of unique chars
        //maxi to hold max of all values
        int count=0, maxi=0;
        while(right<s.size() and left<s.size()){
            if(m[s[right]]>0){
                
                m[s[left]]--;
                left++;
                count--;
            }
            else{
                count++;
                m[s[right]]++;
                right++;
            }
            maxi=max(maxi, count);
        }
        return maxi;
    }
};