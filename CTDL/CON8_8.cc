#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        queue <long long> q;
        q.push(1);
        while(q.size())
        {
            long long x = q.front();
            q.pop();
            if(x % n == 0)
            {
                cout << x << endl;
                break;
            }
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
    }
}