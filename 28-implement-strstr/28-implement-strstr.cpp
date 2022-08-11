class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0;
        
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                bool ok=true;
                for(int j=0;j<needle.length();j++){
                    if(needle[j]!=haystack[i+j]){
                        ok=false;
                        break;
                    }
                }
                if(ok)return i;
            }
        }
        return -1;
    }
};