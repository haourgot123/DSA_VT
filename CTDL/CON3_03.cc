#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        ll res =0;
        for(int i = 0; i < n; i++)
        {
            res = (res + a[i] * i) % MOD;
        }
        cout << res % MOD << endl;
    }
}