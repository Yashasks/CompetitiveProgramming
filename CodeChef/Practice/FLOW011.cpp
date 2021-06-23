	
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
		int b;
		double da,hra;
		double gross;
		cin>>b;
		if(b<1500)
		{
			da=0.90*b,hra=0.10*b;
			gross=da+hra+b;
			cout<<fixed<<setprecision(2)<<gross<<"\n";

		}
		else
		{
			da=0.98*b;
			gross=da+b+500;
			cout<<fixed<<setprecision(2)<<gross<<"\n";
		}

	}
	return 0;
}