#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int pos = upper_bound(a, a+n, x) - a;
        if(pos == 0) cout << -1 << endl;
        else if(pos == n) cout << a[n-1] << endl;
        else cout << pos << endl;
    }
}