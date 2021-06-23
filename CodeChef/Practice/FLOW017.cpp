	
/*
	* author : Yashas K S
	* created :
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define ll long long
#define ld long double
#define vi vector<int>
#define li list<int>
#define ar array
#define rep(i,n) for(int i=0;i<n;i++)
#define repk(i,k,n) for(int i=k;i<n;i++)
#define range(c) for(auto& it : c)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		
		int a,b,c;
		cin>>a>>b>>c;
		if(a>b &&a>c)
		{
			if(b>c)
				cout<<b<<endl;
			else 
				cout<<c<<endl;
		}
		else if(b>c && b>a)
		{
			if(a>c)
				cout<<a<<endl;
			else
				cout<<c<<endl;

		}
		else
		{
			if(a>b)
				cout<<a<<endl;
			else
				cout<<b<<endl;
		}




	}

	return 0;
}