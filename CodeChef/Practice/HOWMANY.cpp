	
	
/*
	* author : Yashas K S
	* created :
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define ll long long
#define ld long double
#define vi vector<int>
#define li list<int>
#define ar array
#define rep(i,n) for(int i=0;i<n;i++)
#define repk(i,k,n) for(int i=k;i<n;i++)
#define range(c) for(auto& it : c)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	int n=floor(log10(t))+1;
	if(n==1)
		cout<<1<<endl;
	else if(n==2)
		cout<<2<<endl;
	else if(n==3)
		cout<<3<<endl;
	else
		cout<<"More than 3 digits"<<endl;

	return 0;
}