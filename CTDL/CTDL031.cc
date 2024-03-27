#include <bits/stdc++.h>
using namespace std;

string Dec2Bin(int n)
{
    bitset<10> binary(n);
    return binary.to_string();
}

string Bin2Gray(string s)
{
    string res = "";
    res += s[0];
    for(int i = 1; i < s.length(); i++)
    {
        res += (s[i-1] ^ s[i]) + '0';
    }
    return res;
}

int Bin2Dec(string s)
{
    int ans = 0;
    int tmp = 1;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * tmp;
        tmp *= 2;
    }
    return ans;
}

void solve()
{
    int n; cin >> n;
    string s = Dec2Bin(n);
    string s1 = Bin2Gray(s);
    cout << Bin2Dec(s1) << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
}