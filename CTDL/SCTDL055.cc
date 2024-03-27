#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007


ll fibonaci(int n)
{
    ll f1 = 0, f2 = 1;
    for(int i = 0; i < n; i++)
    {
        ll fn = (f1 + f2) % MOD;
        f2 = f1;
        f1 = fn;
    }
    return f1 % MOD;
}



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << fibonaci(n) << endl;
    }
}
