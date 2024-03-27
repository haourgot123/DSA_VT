#include<bits/stdc++.h>
using namespace std;

int a[100],ok;

void ktao(int n)
{
    for(int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh(int n)
{
    int  i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i == 0)
    {
        ok = 0;
    }
    else 
    {
        a[i] = 1;
    }
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '?') n++;
        }
        ktao(n);
        ok = 1;
        while(ok)
        {
            int k = 1;
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] == '?')
                {
                    cout << a[k];
                    k++;
                }
                else
                {
                    cout << s[i];
                }
            }
            sinh(n);
            cout << endl;
        }
    }
}