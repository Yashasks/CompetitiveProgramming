
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
		int i = s[0] - '0';
		int l = s.back() - '0';
		cout << l + i << endl;


	}
	return 0;
}