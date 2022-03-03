class Solution {
public:
 bool isSubsequence(string s, string t) {
        int i=0, j=0, c=0;
        if(s.size()>t.size())return false;
        for(;i<t.size();i++){
            if(t[i]==s[j]){
                j++;
                c++;
            }
            
        }
        if(c==s.size())return true;
        else return false;
        
    }
};