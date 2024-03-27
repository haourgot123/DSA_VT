#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll a[n];
        ll b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<>());
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += (a[i]*b[i]);
        }
        cout << ans << endl;
    }   
}