	
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
		int a,c;
		float b;
		cin>>a>>b>>c;
		if(a>50 && b<0.7 && c>5600)
			cout<<10<<endl;
		else if(a>50 && b<0.7)
			cout<<9<<endl;
		else if(c>5600 && b<0.7)
			cout<<8<<endl;
		else if(a>50 && c>5600)
			cout<<7<<endl;
		else if(a>50 || b<0.7 || c>5600)
			cout<<6<<endl;
		else 
			cout<<5<<endl;


	}
	return 0;
}