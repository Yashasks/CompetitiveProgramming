	
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
		int d,day,a,b,c;

		cin>>day>>d>>a>>b>>c;
		int count=day*d;
		if(count>=42)
			cout<<c<<"\n";
		else if(count>=21 && count<42)
			cout<<b<<"\n";
		else if(count>=10 && count<21)
			cout<<a<<"\n";
		else if(count<10)
			cout<<0<<"\n";

	}
	return 0;
}