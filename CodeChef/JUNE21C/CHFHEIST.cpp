	
	
	
	
/*
	*********************
	* author : Yashas K S
	* created: 04:06:2021 15:00:00
*/

#include <bits/stdc++.h>
using namespace std;


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
	ull t;	
	cin>>t; 
	while(t--)
	{
		ull i=0;
		ull D,d,p,q;
		cin>>D>>d>>p>>q;
		ull total=D*p;
		i=D/d-1;
		total+=d*((i*(i+1)/2)*q);
		if(D%d!=0)
			total+=(D%d)*((D/d)*q);
		cout<<total<<endl;


	}


	return 0;
}