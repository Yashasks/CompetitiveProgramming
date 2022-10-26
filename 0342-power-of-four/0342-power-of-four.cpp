class Solution {
public:
    bool isPowerOfFour(int n) {
        int r=0;
        if(n<0)return 0;
        if(n==1)return 1;
        
        
       
        while(n>4){
            r=max(r, (n%4));
            n/=4;
        }
        if(r==0 and n==4)return 1;
        return 0;
    }
};