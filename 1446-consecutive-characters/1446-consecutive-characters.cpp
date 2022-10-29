class Solution {
public:
    int maxPower(string s) {
        int c=1, m=0;
        if(s.size()==1)return 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])c++;
            else c=1;
            
            m=max(c, m);
        }
        return m;
    }
    
};