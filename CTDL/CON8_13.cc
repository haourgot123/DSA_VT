#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] - '0' > 5) return false;
    }
    set<char> se;
    for(int i = 0; i < s.size(); i++) se.insert(s[i]);
    if(se.size() != s.size()) return false;
    return true;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int ans = 0;
        int l, r; cin >> l >> r;
        for(int i = l; i <= r; i++)
        {
            if(check(i)) ans++;
        }
        cout << ans << "\n";
    }
}