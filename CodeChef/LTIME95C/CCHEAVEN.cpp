#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	ll t;

	cin >> t;

	for (int j = 0; j < t; j++)
	{
		ll l;
		string s;

		ll c = 0;
		c = 0;
		bool ok = 1;
		cin >> l >> s;


		ll i = 0;
		while (i != l)
		{
			c = c + s[i] - '0';
			if (2*c >= (i + 1) )
			{
				ok = 0;
			}
			i++;
		}
		if (!ok)
		{
			cout << "YES\n";

		}
		else
		{
			cout << "NO\n";
		}



	}
	return 0;

}
