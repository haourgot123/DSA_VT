#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n; cin >> n;
    if(n == 0)
    {
        cout << 0 << endl;
        return;
    }
    queue<long long> q;
    q.push(1);
    long long ans = 0;
    while(q.front() <= n)
    {
        long long x = q.front(); q.pop();
        ans++;
        q.push(x*10);
        q.push(x*10+1);
    }
    cout << ans << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}