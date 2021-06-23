
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
		int n;
		int sum = 0;
		cin >> n;
		while (n != 0)
		{
			sum = sum + n % 10;
			n /= 10;

		}
		cout << sum << "\n";

	}
	return 0;
}