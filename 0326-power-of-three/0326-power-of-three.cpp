class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)return 0;
        if(n<0)return 0;
        if(n==1)return 1;
        int r=0;
        while(n>3){
            r=max(r, n%3);
            n/=3;
        }
        if(n==3 and r==0)return 1;
        return 0;
    }
};