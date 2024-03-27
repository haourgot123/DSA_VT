#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll val;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            q.push(val);
        }
        ll res = 0;
        while(q.size() > 1)
        {
            ll x = q.top(); q.pop();
            ll y = q.top(); q.pop();
            q.push(x+y);
            res += x+ y;
        }
        cout << res << endl;
    }
}