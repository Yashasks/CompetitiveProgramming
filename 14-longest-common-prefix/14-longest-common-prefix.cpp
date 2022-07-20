class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=0;
        string minString="";
        int minLen=0;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()>minLen)minLen=strs[i].size(), minString=strs[i];
        }
        bool ok=true;
        for(int i=0;i<minLen;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=minString[i]){
                    return minString.substr(0, count);
                }
                
                
            }
            count++;
        }
        
        return minString.substr(0, count);
    }
};