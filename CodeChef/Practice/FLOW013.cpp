	
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
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c==180)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";

	}
	return 0;
}