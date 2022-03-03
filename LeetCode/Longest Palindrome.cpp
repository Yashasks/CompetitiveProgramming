class Solution {
public:
    int longestPalindrome(string s) {
        int c=0, o=0;
        map<char, int>m;
        for(char i:s)m[i]++;
        
        for(auto i:m){
            if(i.second>=2){
                c+=(floor(i.second/2)*2);
                if(i.second%2==1)o++;
            }
            else if(i.second>0)o++;
        }
        
        if(o>0)return c+1;
        else return c;
        
    }
};