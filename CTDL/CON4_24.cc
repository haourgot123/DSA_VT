#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 123456789

ll binary_pow(ll a, ll b)
{
    if(b == 0) return 1;
    ll x = binary_pow(a,b/2);
    if(b%2) return (x * x * a) % MOD;
    else return (x * x) % MOD;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        ll res = binary_pow(2, n - 1) ;
        cout << res % MOD << endl;
    }
}