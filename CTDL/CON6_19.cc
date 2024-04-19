#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        sort(a, a+n);
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i+1] - a[i] > 1)
            {
                ans += a[i+1] - a[i] - 1;
            }
        }
        cout << ans << endl;
    }
}