#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
        
    vector<int> v, w;
    
    for(int i=1;i<=n;i++){
        if(a[i-1]&1==1)v.push_back(i);
        else w.push_back(i);
        
    }
    if(v.size()==1)cout<<v[0]<<endl;
    else cout<<w[0]<<endl;
    
    
    return 0;
}