	
/*
	*********************
	* author : Yashas K S
	* created: 06:07:2021
*/

#include <bits/stdc++.h>
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
typedef vector<vi> vii;
typedef map<int,int> mpii;
typedef set<int> seii;
typedef multiset<int> mseti;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int arr[100];
	cout<<"Enter the number of elments :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	int k=0;
	int i=0;
	for(int i=0;arr[i]<arr[i+1];i++)
	{
		k++;
	}

	cout<<k+1;
	return 0;
}