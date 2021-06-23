	
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
		int d,n;
		cin>>d>>n;
		int i=0,k=0;
		while(i<d)
		{
			k=n*(n+1)/2;
			n=k;
			i++;

		}
		cout<<k<<"\n";


	}
	return 0;
}