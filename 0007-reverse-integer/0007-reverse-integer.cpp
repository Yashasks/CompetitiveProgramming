class Solution {
public:
    int reverse(int x) {
        bool ok=false;
        if(x<0)ok=true;
        
        long long n=0;
        x=abs(x);
        while(x>0){
            
            n=n*10+x%10;
           
            x/=10;
        }
        
        if(ok)n=-n;
        if(n>= -1*pow(2, 31) and n<= pow(2, 31)-1)
            return n;
        
        return 0;
    }
};