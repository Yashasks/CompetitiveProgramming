class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        int n=s.size();
        int j=0;
        int maxi=0;
        
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(s[(i+j)%n]==goal[j])c++;
            }
            maxi=max(c, maxi);
        }
        if(maxi==n)return true;
        return false;
    }
};