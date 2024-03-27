#include<bits/stdc++.h>
using namespace std;




int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        map <char, int> mp;
        for(int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int tmp = ceil(s.length() / 2);
        int check = 1;
        for(auto it : mp)
        {
            if(it.second > tmp)
            {
                check = 0;
                break;
            }
        }
        if(check) cout << 1;
        else cout << -1;
        cout << endl;
    }
}