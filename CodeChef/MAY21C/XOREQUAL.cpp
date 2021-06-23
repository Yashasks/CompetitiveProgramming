
/*
	author : Yashas K S
	created : 07:05:2021
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll func(ll j, ll k, ll mod);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << func(2,n-1,1e9+7) << '\n';
    }
    return 0;
}

ll func(ll j, ll k, ll mod)
{
    ll result = 1;
    while (k > 0)
    {
        if (k & 1)
            result = (result * j) % mod;
        j = (j * j) % mod;
        k >>= 1;
    }
    return result;
}