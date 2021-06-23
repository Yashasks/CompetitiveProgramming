	
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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int x,m,d;
		cin>>x>>m>>d;
		if(x*m<x+d)
			cout<<x*m<<endl;
		else 
			cout<<x+d<<endl;
	}

	return 0;
}