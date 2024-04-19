#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i  = 0; i < n; i++) cin >> a[i];
        int L1[n+1], L2[n+1];
        for(int i = 0; i < n; i++) L1[i] = L2[i] = a[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(a[i] > a[j])
                {
                    L1[i] = max(L1[i], L1[j] + a[i]);
                }
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = n - 1; j >= i; j++)
            {
                if(a[i] > a[j])
                {
                    L2[i] = max(L2[i], L2[j] + a[i]);
                }
            }
        }
        int ans = -1e9;
        for(int i = 0; i < n; i++)
        {
            ans = max(ans, L1[i] + L2[i] - a[i]);
        }
        cout << ans << "\n";
    }
}