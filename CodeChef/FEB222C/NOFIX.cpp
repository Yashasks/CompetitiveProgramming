#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        list<int> l;
        int k=INT_MAX;
        int j=1, c=0;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        l.assign(a, a+n);
        for(auto i=l.begin();i!=l.end();i++){
            if(*i==j){
                l.insert(i, k--);
                i--;
                c++;
            
            }
            j++;
        }
        
        cout<<c<<endl;
        
    }
    
    return 0;
}