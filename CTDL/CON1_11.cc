#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string ans = "";
        ans += s[0];
        for(int i = 1; i < s.size(); i++)
            ans += ((s[i] - '0') ^ (s[i - 1] - '0')) + '0';
        cout << ans << endl;
    }
}