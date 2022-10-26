class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m, n;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                if(n.find(t[i])==n.end())
                {
                m[s[i]]=t[i];
                n[t[i]]=s[i];
                }
                else return false;
                
            }
            else{
                if(m[s[i]]!=t[i] and n[t[i]]!=s[i])return false;
            }
        }
        return true;
    }
};