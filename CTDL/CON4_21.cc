#include <bits/stdc++.h>
using namespace std;

#define MOD  1000000007

long long b_pow(long long n, long long k)
{
    if(k==0) return 1;
    long long x = b_pow(n, k/2);
    if(k%2==1) return ((x%MOD*x%MOD)%MOD*n%MOD) % MOD;
    else return (x%MOD * x % MOD) % MOD;
}

int main()
{
    int t; cin >>  t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long ans = b_pow(n, k);
        cout << ans % MOD << endl;
    }
}