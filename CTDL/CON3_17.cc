#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k;
        string s;
        cin >> k >> s;
        map<char, int> mp;
        for(char x : s) mp[x]++;
        priority_queue<int> pq;
        for(auto it : mp) pq.push(it.second);
        while(k)
        {
            int x = pq.top();
            pq.pop();
            x -= 1;
            pq.push(max(x, 0));
            k-=1;
        }
        int res = 0;
        while(pq.size())
        {
            int x = pq.top();
            pq.pop();
            res += x * x;
        }
        cout << res << endl;

    }
}