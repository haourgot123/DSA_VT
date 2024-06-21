#include <bits/stdc++.h>
using namespace std;
int n, s, a[20], ok;
int b[20];

void init()
{
    for(int i = 1; i <= n; i++)
        a[i] = 0;
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

bool check()
{
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0) res += b[i - 1];
    }
    return res == s;
}



int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        int dem = 0;
        init();
        ok = 1;
        while(ok)
        {
            if(check())
            {
                dem = 1;
                vector <int> v;
                cout << '[';
                for(int i = 1; i <=n; i++)
                {
                    if(a[i] == 0) v.push_back(b[i - 1]);
                }
                for(int i = 0; i < v.size() - 1; i++) 
                {
                    cout << v[i] << " ";
                }
                cout << v[v.size() - 1] << "] ";
            }
            sinh();
        }
        if(dem == 0) cout << "-1";
        cout << endl;
    }
}