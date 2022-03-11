#include<bits/stdc++.h>
using namespace std;
void isPalindrom(string s) {
        string k="";
        for(char i: s){
            if((i>='a' and i<='z') or (i>='A' and i<='Z') ){
                k+=tolower(i);
            }
        }
        cout<<k<<endl;
    }

int main(){
    string s="0P";
    
    isPalindrome(s);
    
    
    
    return 0;
}