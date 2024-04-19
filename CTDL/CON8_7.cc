#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        queue <long long > q;
        q.push(1);
        long long ans = 0;
        while(q.front() <= n)
        {
            ans++;
            long long x = q.front();
            q.pop();
            q.push(x * 10);
            q.push(x*10+1);
        }
        cout << ans << endl;
    }
}