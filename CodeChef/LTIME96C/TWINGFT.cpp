	
	
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
		int n,k;
		ll x;
		cin>>n>>k;
		ll t1=0,t2=0;
		ll arr[10000];
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];

		}
		sort(arr, arr+n,greater<ll>());
		
		for(int j=0;j<2*k;j++)
		{
			if(j%2==0)
				t1+=arr[j];
			else
				t2+=arr[j];
		}
		t2+=arr[2*k];
		if(t1>t2)
			cout<<t1<<endl;
		else
			cout<<t2<<endl;

	}

	return 0;
}