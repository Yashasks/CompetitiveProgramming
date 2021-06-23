	
/*
	author : Yashas K S
	created :
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n,x,k;
		bool ok=false;
		cin>>n>>x>>k;
		if(x%k==0 || x%k==(n+1)%k )
			ok=true;
		
		(ok==true)? cout<<"YES\n" : cout<<"NO\n";

	}
	return 0;
}