class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool ok=false;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]==' '){
                if(ok)break;
                i--;
                continue;
            }
            else{
                ok=true;
                count++;
                i--;
            }
        }
        return count;
    }
};