
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
	ll k;
	cin >> k;
	int count = 0;
	while (t--)
	{

		ll t;
		cin >> t;
		if (t % k == 0)
			count++;



	}
	cout << count << "\n";
	return 0;
}