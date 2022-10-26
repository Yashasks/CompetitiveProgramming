class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while(n>0){
            s+=to_string(n%2);
            n/=2;
        }
        reverse(s.begin(), s.end());
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])return false;
        }
        return true;
    }
};