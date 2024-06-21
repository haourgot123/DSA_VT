#include <bits/stdc++.h>
using namespace std;





int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        map<char, int> mp;
        for(char x : s) mp[x]++;
        int ans = 1;
        for(auto it : mp)
        {
            if(it.second > ceil(s.size()/2))
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
}