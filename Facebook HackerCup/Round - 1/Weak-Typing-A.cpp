    

/*
    ***************************
    *  author : Yashas K S    * 
    *  created: 11/09/2021    *
    ***************************
*/
#include<iostream>
#include<map>
#include<climits>
#include <algorithm>
#include <string>
#include <cstring>

/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;*/

using namespace std;

typedef long long           ll;
typedef long double         ld;
typedef unsigned long long  ull;

typedef map<int,int>        mpii;


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

#define odd(a)              ((a) & 1)
#define all(cont)           cont.begin(), cont.end()

#define iter(c, it)         for(__typeof(c.begin()) it=c.begin(); it!=c.end(); it++ )
/*#define log(args...)        {string _s=#args; replace(_s.begin(), _s.end(), ',',' ' ); istream_iterator<string>_it(_ss);err(_it, args); }
#define logarr(arr, start_index, end_index) for(int i=(start_index); i<=(end_index);i++) cout<<(arr[i]); cout<<endl;
template<typename T> T gcd(T a, T b){ if(a%b) return gcd(a%b) ; return b;}
template<typename T> T lcm(T a, T b){ return a*b/gcd(a,b);}*/
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
    int i=1;
    //test case
    while(t--){
        //input
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count=0;
        map<char, int> m;
        for(char i: s){
            m[i]++;
        }

        if(m['X']==0 || m['O']==0){
            cout<<"Case #"<<i<<": "<<0<<endl;
            ++i;
            continue;
        }

        char prev='A';
        for(ll i=0;i<s.size();i++){
            if(s[i]=='X' || s[i]=='O'){
                if(s[i] != prev){
                    count++;
                    prev = s[i];
                }
            }
        }

        cout<<"Case #"<<i<<": "<<count-1<<endl;
        ++i;
    }
    return 0;
}