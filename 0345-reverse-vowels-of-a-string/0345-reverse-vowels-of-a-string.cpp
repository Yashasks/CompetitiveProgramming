class Solution {
public:
    
        string reverseVowels(string s) {
    
    int i=0;
    int j=s.size()-1;
    unordered_set<char> st = {'a','e','i','o','u', 'A', 'E','I','O','U'};
    
    while(i<j){
        
        if( st.find(s[i]) == st.end()){
            i++;
        }
        else if(st.find(s[j]) == st.end()){
            j--;
        }
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
    }
    
    
    return s;
    }
};