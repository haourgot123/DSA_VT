#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll = long long;
ll a[10][10], b[10][10];
ll n, k;
void Mull(ll x[10][10], ll y[10][10])
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

void Pow(ll a[10][10], int n)
{
    if(n <= 1) return;
    Pow(a, n/2);
    Mull(a, a);
    if(n&1) Mull(a, b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i= 0; i<n; i++)
        {
           for(int j = 0; j < n; j++)
           {
               cin >> a[i][j];
               b[i][j] = a[i][j];
           }
        }
        Pow(a, k);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        } 
    }
}