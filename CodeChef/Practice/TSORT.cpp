
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
	ll t;
	vector<ll> v;

	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		v.push_back(n);


	}
	sort(v.begin(), v.end());
	for (auto it : v)
		cout << it << endl;
	return 0;
}