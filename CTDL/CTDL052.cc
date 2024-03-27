#include <bits/stdc++.h>
using namespace std;

string sum(string a, string b, int k)
{
    int n1 = a.length();
    int n2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans = "";
    for(int i = n2; i < n1; i++)
    {
        b += "0";
    }
  
    
    int nho = 0;
    for(int i = 0; i < n1; i++)
    {
        int q = (a[i] - '0') + (b[i] - '0') + nho;
        nho = q / k;
        ans += (q % k) + '0';
    }
    if(nho) ans += nho + '0';
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k;
        string a,b;
        cin >> k >> a >> b;
        if(a.length() < b.length()) swap(a,b);
        string res = sum(a,b,k);
        cout << res << endl;
    }
}