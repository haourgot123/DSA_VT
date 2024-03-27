#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll = long long;

ll k;
ll n;
ll a[10][10], b[10][10];

void Mul(ll x[10][10], ll y[10][10])
{
    ll tmp[10][10];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ll res = 0;
            for(int k = 0; k < n; k++)
            {   
                res += (x[i][k] * y[k][j]) % MOD;
                res %= MOD;
            }
            tmp[i][j] = res;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = tmp[i][j];
        }
    }
}

void pow(ll a[10][10], int m)
{
    if(m <= 1) return;
    pow(a,m/2);
    Mul(a,a);
    if(m&1) Mul(a,b);
}

void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }    
    pow(a,k);
    ll res = 0;
    int k = n - 1;
    for(int i = 0; i < n; i++)
    {
       
       res = (res + a[i][k]) % MOD;
       k--;
    }
    cout << res << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}