class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> m;
        char a;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]>1){
                a=s[i];
                break;
            }
        }
        return a;
        

    }
};