class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))c++;
        }
        if(c==0)return true;
        if(c==word.size())return true;
        if(c==1 and isupper(word[0]))return true;
        
        return false;
    }
};