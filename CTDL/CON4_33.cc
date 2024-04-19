#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long b_pow(long long n, long long k)
{
    long long ans = 1;
    while(k)
    {
        if(k&1) ans = ans*n%MOD;
        n = n*n%MOD;
        k >>= 1;
    }
    return ans % MOD;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1; cin >> s1;
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        long long n2 = stoll(s2);
        long long n1 = stoll(s1);
        long long ans = b_pow(n1, n2);
        cout << ans << "\n";
    }
}