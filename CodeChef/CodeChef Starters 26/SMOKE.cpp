    

/*
    ***************************
    *  author : Yashas K S    * 
    *  created:               *
    ***************************
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
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

int main(){
    //fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    //test case
    while(t--){
        
    //code ...
        int n, x, y, a=0, b=0;
        cin>>n>>x>>y;
        if(n>4)
        {
            if(n%4==0)a=(n/4)*y;
            else a=((n/4)+1)*y;
            
        }
        else {
            a=y;
        }
        if(n>100){
            
            if(n%100!=0)b=((n/100)+1)*x;
            else b=(n/100)*x;
            int k=(n/100)*x;
            if((n%100)%4==0){
                k+=(y*((n%100)/4));
            }
            else{
                k+=(((n%100)/4)*y)+y;
                
            }
            b=min(b, k);

            
            
            
            
        }  
        else{
            b=x;
            
        }

        cout<<min(a, b)<<endl;
        
        

    }
    return 0;
}