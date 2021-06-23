
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
		string s;
		cin >> s;
		auto n = count(s.begin(), s.end(), '4');
		cout << n << "\n";

	}
	return 0;
}