#include <bits/stdc++.h>
using namespace std;

int n, ok;
int k;
char a[20];
void init()
{
    for(int i = 1; i <= n; i++) a[i] = 'A';
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 'B')
    {
        a[i] = 'A';
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 'B';
}

bool check()
{
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for(int j = i; j <= n; j++)
        {
            if(a[j] == 'A') cnt++;
            if(cnt > k) return false;
            if(a[j] == 'B')
            {
                if(cnt == k) ans++;
                break;
            }
            if(j == n && cnt == k) ans ++;
        }
    }
    return ans == 1;
}


int main(int argc, char** argv)
{
    int t; t = 1;
    while(t--)
    {
        cin >> n >> k;
        ok = 1;
        vector <string> ans;
        int cnt = 0;
        init();
        while(ok)
        {
            if(check())
            {
                cnt++;
                string tmp = "";
                for(int i = 1; i <= n; i++)
                {
                    tmp += a[i];
                }
                ans.push_back(tmp);
            }
            sinh();
        }
        cout << cnt << endl;
        for(string s : ans) cout << s << endl;
    }
}