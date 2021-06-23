	
/*
	author : Yashas K S
	created : 19/05/2021
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
		cin>>n;
		int count=0;
		int i=5;
		int note[6]={1,2,5,10,50,100};
		while(n!=0)
		{
			if(n>=note[i])
			{
				count+=n/note[i];
				n=n%note[i];

			}
			i--;

	}
	cout<<count<<"\n";
}
	return 0;
}