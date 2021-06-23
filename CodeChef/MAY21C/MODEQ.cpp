	
/*
	author : Yashas K S
	created : 13:05:2021
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
		int n,m;
		int x=0;
		cin>>n>>m;
		vector<int>vec(n+1);
		fill(vec.begin(),vec.end(),1);
		int a=2;
		while(a<=n)
		{
			int c=m%a;
			x+=vec[c];
			for(int b=c;b<=n;b+=a)
			{
				vec[b]+=1;

			}
			a+=1;
		}
		cout<<x<<"\n";

}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		
	}
	return 0;
}