	
	
	
	
/*
	*********************
	* author : Yashas K S
	* created: 
*/

#include <bits/stdc++.h>
using namespace std;



// Constants
/*constexpr double pi=acos(-1.0);
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr int MOD = 1000000007;*/

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
typedef vector<vi> vii;
typedef map<int,int> mpii;
typedef set<int> seii;
typedef multiset<int> mseti;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int res=sqrt(n);
		cout<<res<<endl;

	}
	return 0;
}