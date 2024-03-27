#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007




int main()
{
    int t; cin >> t;
    while(t--)
    {  
        int n; cin >> n;
        long long sum = 0;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++)
        {
            sum = (sum + (a[i] * i) % MOD) % MOD;
        }
        cout << sum << endl;
    }
}