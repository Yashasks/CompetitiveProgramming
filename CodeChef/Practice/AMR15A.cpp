
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
	int l = 0, u = 0;
	while (t--)
	{
		int n;
		cin >> n;
		(n % 2 == 0) ? l++ : u++;

	}
	(l > u) ? cout << "READY FOR BATTLE\n" : cout << "NOT READY\n";
	return 0;
}