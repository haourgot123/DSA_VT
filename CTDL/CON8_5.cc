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
        for(int i = 0; i < n; i++)
        {
            long long x = q.front();
            q.pop();
            cout << x << " ";
            q.push(x * 10);
            q.push(x * 10 + 1);
        }  
        cout << endl;
    }
}