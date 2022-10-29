class Solution {
public:
    int addDigits(int n) {
        long long ans=0;
        while(true){
            ans+=n%10;
            n/=10;
            if(!(n>0)){
                if(ans<10)break;
                else n=ans, ans=0;
            }
        }
        return ans;
    }
};