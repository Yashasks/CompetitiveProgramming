	
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
		int a,x,b;
		cin>>x>>a>>b;
		int max=a+(100-x)*b;
		cout<<max*10<<"\n";

	}
	return 0;
}