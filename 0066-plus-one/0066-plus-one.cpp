class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        bool ok=false;
        int i=0;

        while(i<digits.size()){
            if(digits[i]!=9){
                digits[i]+=1;
                break;
            }
            else{
                digits[i]=0;
                i++;
            }
        }
        if(digits[digits.size()-1]==0)digits.push_back(1);
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};