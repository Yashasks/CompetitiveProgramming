	
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
		int a,b;
		cin>>a>>b;
		if(a==b)
			cout<<"="<<"\n";
		else if(a>b)
			cout<<">"<<"\n";
		else
			cout<<"<"<<"\n";


	}
	return 0;
}
