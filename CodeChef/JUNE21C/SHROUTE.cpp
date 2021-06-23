
	
	
/*
	*********************
	* author : Yashas K S
	* created: 05:06:2021 23:43:00
*/

#include <bits/stdc++.h>
using namespace std;



#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define ef emplace_front
#define mp make_pair
#define fi first
#define sc second
#define ar array


#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define sclld(t) scanf("%lld",&t)
#define scc(t) scanf("%c",&t)
#define scs(t) scanf("%s",t)
#define scf(t) scanf("%f",&t)
#define sclf(t) scanf("%lf",&t)
#define rep(i,n) for(i=0;i<n;i++)
#define repk(i,k,n) for(i=k;i<n;i++)
#define range(c) for(auto& it : c)
#define odd(a)  ((a) & 1)
#define all(cont) cont.begin(), cont.end() //sort(all(c))
#define allr(x) rbegin(x), rend(x)


typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vii;
typedef map<int,int> mpii;
typedef set<int> seii;
typedef multiset<int> mseti;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;	
	cin>>t; 
	while(t--)
	{

		
		ll n,m;
		cin>>n>>m;
		ll a[100001],b[100001];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<m;i++)
			cin>>b[i];

		ll ans[100001];
		for(int i=0;i<n;i++)
		{
			if(a[i]==1 || a[i]==2)
				ans[i]=0;
			else
				ans[i]=INT_MAX;

		}
		ans[0]=0;
		int no=-1;
		//left to ryt
		for(ll i=0;i<n;i++)
		{
			
			if(a[i]==1 || a[i]==2)
			{
				ans[i]=0;
				if(a[i]==1 )
					no=i;
			}
				
			if(no!=-1)
			{
				if(a[i]==0)
					ans[i]=min(ans[i],i-no);
			}

		}
		//ryt to left
		no=-1;
		for(ll i=n-1;i>=0;i--)
		{
			if(a[i]==2)
			{
				no=i;
				
			}
			if(no!=-1 && a[i]==0)
					ans[i]=min(no-i,ans[i]);
			
		}

		//print answer array
		for(ll i=0;i<m;i++)
		{
			int j=b[i]-1;
			if(ans[j]!=INT_MAX)
			{
				cout<<ans[j]<<' ';
			}
			else
				cout<<-1<<' ';

		}
		cout<<"\n";

	}


	return 0;
}