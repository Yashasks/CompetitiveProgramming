	
	
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
		int n,i;cin>>n;
		vi v;
		int k;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.pb(k);

		}
		sort(v.begin(),v.end());
		if(v.size()<2)
			cout<<v[0]<<endl;
		else 
			cout<<v[0]+v[1]<<endl;

	}

	return 0;
}