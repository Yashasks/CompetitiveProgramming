class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        while(n>0){
            c+=(n%2);
            n/=2;
        }
        if(c==1)return 1;
        else return 0;
    }
};