#include <bits/stdc++.h>
using namespace std;



int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        int d;
        string s;
        cin >> d >> s;
        map<char, int> mp;
        for(char x : s) mp[x]++;
        int max_fre = -1;
        for(auto it : mp) max_fre = max(max_fre, it.second);
        if(max_fre  - (s.size() - max_fre)/(d - 1) <= 1)
        {
            cout << "1" << endl;
        }
        else cout << "-1" << endl;
    }
}