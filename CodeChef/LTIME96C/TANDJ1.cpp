	
	
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
	while(t--)
	{
		ll a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		ll i=abs((a-c))+abs((b-d));
		if((i%2==0 && k%2==0 || i%2==1 && k%2==1) && k>=i)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
		




	}

	return 0;
}