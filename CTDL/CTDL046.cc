#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,s,m;
    cin >> n >> s >> m;
    if(m > s)
    {
        cout << -1 << endl;
        return;
    }
    float x = 1.0 * (m * s) / n;
    if(floor(x) - x == 0)
    {
        cout << x << endl;
    }
    else cout << floor(x) + 1 << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();

    }
}