#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        queue <int> q;
        q.push(9);
        while(q.size() > 0)
        {
            int x = q.front();
            q.pop();
            if(x % n == 0)
            {
                cout << x << endl;
                break;
            }
            q.push(x * 10);
            q.push(x * 10 + 9);
        }
    }
}