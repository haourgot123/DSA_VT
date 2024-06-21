#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007

ll fibonaci(int n)
{
    int f0 = 0;
    int f1 = 1;
    for(int i = 2; i <= n; i++)
    {
        int fn = f0 + f1;
        fn %= MOD;
        f0 = f1; f1 = fn;
    }
    return f1 % MOD;
}




int main(int argc, char **argv)
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << fibonaci(n) << endl;
    }
}