#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue<int> q;
        for(auto it : mp)
        {
            q.push(it.second);
        }
        while(k > 0)
        {
            int tmp = q.top();
            q.pop();
            tmp--;
            k--;
            q.push(tmp);
        }
        int ans = 0;
        while(q.size())
        {
            ans += q.top() * q.top();
            q.pop();
        }
        cout << ans << "\n";
        
    }
}