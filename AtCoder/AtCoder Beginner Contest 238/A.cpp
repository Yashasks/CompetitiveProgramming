    

/*
    ***************************
    *  author : Yashas K S    *               
    ***************************
*/

/*********************************************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

/*********************************************************************************************************/

/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;*/

using namespace std;

typedef long long           ll;
typedef long double         ld;
typedef unsigned long long  ull;
typedef pair<int, int>      pii;
typedef pair<ll, ll>        pll;
typedef vector<int>         vi;
typedef vector<string>      vs;
typedef vector<pii>         vpii;
typedef vector<vi>          vii;
typedef map<int,int>        mpii;
typedef set<int>            seii;
typedef multiset<int>       mseti;

/*********************************************************************************************************/

#define mod                 1000000007
#define inf                 1e9
#define PI                  3.1415926535897932384626433832795
#define endl                "\n"
#define pb                  push_back
#define mp                  make_pair
#define ff                  first
#define ss                  second
#define ar                  array
#define ump                 unordered_map
#define pq_max              priority_queue<ll>
#define pq_min              priority_queue<ll, vector<ll>, greater<ll>>
#define allr(x)             rbegin(x), rend(x)
#define odd(a)              ((a) & 1)
#define all(cont)           cont.begin(), cont.end()
#define range(c)            for(auto& it : c)
#define mid(l, r)           (l+(r-l)/2)
#define scd(t)              scanf("%d",&t)
#define scld(t)             scanf("%ld",&t)
#define sclld(t)            scanf("%lld",&t)
#define scc(t)              scanf("%c",&t)
#define scs(t)              scanf("%s",t)
#define scf(t)              scanf("%f",&t)
#define sclf(t)             scanf("%lf",&t)
#define bitc(x)             __builtin_popcount(x)
#define loop(i, a, b)       for(int i=(a);i<=(b);i++)
#define revloop(i, b, a)    for(int i=(b);i>=(a);i--)
#define iter(c, it)         for(__typeof(c.begin()) it=c.begin(); it!=c.end(); it++ )
#define log(args...)        {string _s=#args; replace(_s.begin(), _s.end(), ',',' ' ); istream_iterator<string>_it(_ss);err(_it, args); }
#define logarr(arr, start_index, end_index) for(int i=(start_index); i<=(end_index);i++) cout<<(arr[i]); cout<<endl;
template<typename T> T gcd(T a, T b){ if(a%b) return gcd(a%b) ; return b;}
template<typename T> T lcm(T a, T b){ return a*b/gcd(a,b);}
//string tokenizer missing



/*
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args){
    cout<< *it<<" = "<<a<<endl;
    err(++it, args...);
}
*/

/*********************************************************************************************************/
ull power(ull x, ull y)
{
     
    // Initialize answer
    ull res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
int main(){
    //fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    t=1;
    //test case
    while(t--){
        
    //code ...
        ull n;cin>>n;
        if(n==2 or n==3 or n==4)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        


    }
    return 0;
}