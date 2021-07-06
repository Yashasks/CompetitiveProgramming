	
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
	int arr[100];
	int n,i,j;
	cout<<"enter the size of the array :";
	cin>>n;
	i=0;
	rep(i,n)
	cin>>arr[i];
	int temp=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		arr[i]=arr[i-1];

	}
	arr[0]=temp;
	cout<<"After rotation:"<<endl;
	i=0;
	rep(i,n)
	cout<<arr[i]<<" ";


	return 0;
}