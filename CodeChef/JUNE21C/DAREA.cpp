	
/*
	*********************
	* author : Yashas K S
	* created: 14:06:2021
*/

#include<vector>
#include<iostream>
#include<set>
#include<iterator>
#include<cmath>
#include<algorithm>
#include<climits>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define br "\n"
#define pb push_back
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
#define rep(i,n) for(int i=0;i<n;i++)
#define repk(i,k,n) for(int i=k;i<n;i++)
#define range(c) for(auto& it : c)
#define odd(a)  ((a) & 1)
#define all(cont) cont.begin(), cont.end()
#define allr(x) rbegin(x), rend(x)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pair<long long, long long>> vpll;
typedef vector<vi> vii;

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
		
		ll n,i=0;
		cin>>n;
		vpll x;
		vpll y;

		mseti A;
		mseti B;
		i=0;
		rep(i,n)
		{
			ll a,b;
			cin>>a>>b;
			x.pb({a,b});
			y.pb({b,a});
			A.insert(a);
			B.insert(b);
		}

		sort(all(x));
		sort(all(y));

		ll a1=LONG_MAX; ll g2=0; ll h1=0;ll h1m=0;ll h1min=LONG_MAX;
		i=0;
		rep(i,n-1)
		{
			h1m=max(x[i].sc,h1m);
			h1min=min(x[i].sc,h1min);
			h1=h1m-h1min;
			auto it=B.find(x[i].sc);
			B.erase(it);
			g2=*B.rbegin()-*B.begin();
			ll a2=(x[i].fi-x[0].fi)*h1+(x[n-1].fi-x[i+1].fi)*g2;
			a1=min(a1,a2);

		}

		ll width1=0;ll width2=0; ll w1max=0;ll w1min=LONG_MAX;
		i=0;
		rep(i,n-1)
		{
			w1max=max(w1max,y[i].sc);
			w1min=min(w1min,y[i].sc);
			width1=w1max-w1min;
			auto it=A.find(y[i].sc);
			A.erase(it);
			width2=*A.rbegin()-*A.begin();
			ll a2=(y[i].fi-y[0].fi)*width1+(y[n-1].fi-y[i+1].fi)*width2;
			a1=min(a1,a2);
		}


		(a1==LONG_MAX) ? cout<<0<<br : cout<<a1<<br ;


	}
	return 0;
}