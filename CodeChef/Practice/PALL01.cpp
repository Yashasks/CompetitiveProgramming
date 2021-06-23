	
	
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
		string n;
		int i,j;
		cin>>n;
		bool flag=true;
		int l=n.length();
		for(i=0,j=l-1;i<l,j>=0;i++,j--)
		{
			if(n[i]!=n[j])
			{
				flag=false;
				break;
			}

		}
		if(flag)
			cout<<"wins"<<endl;
		else
			cout<<"loses"<<endl;


	}

	return 0;
}