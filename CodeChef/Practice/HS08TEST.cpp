
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



	int x;
	double i;
	cin >> x;
	cin >> i;
	if (x+0.50 > i)
		cout << fixed << setprecision(2) << i;
	else if (x % 5 != 0)
		cout << fixed << setprecision(2) << i;


	else
	{
		double bal = 0;
		bal =  i - x - 0.50;

		cout << fixed << setprecision(2) << bal;
	}


	return 0;
}