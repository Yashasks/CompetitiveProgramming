	
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
		bool flag=true;
		cin>>n;
		if(n==1)
		{
			cout<<"no"<<"\n";
			continue;
		}
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=false;
				
			}
		}
		if(flag)
		{
			cout<<"yes"<<"\n";
		}
		else
		{
		    cout<<"no"<<"\n";
		}
	}
	return 0;
}