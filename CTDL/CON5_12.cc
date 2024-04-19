#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        if(k > n)
        {
            cout << 0 << "\n";
        }
        else 
        {
            ll ans = 1;
            for(int i = n - k + 1; i <= n; i++)
            {
                ans = (ans * i) % MOD;
                ans %= MOD;
            }
            cout << ans << endl;
        }
    }
}