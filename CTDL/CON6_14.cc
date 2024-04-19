#include <bits/stdc++.h>
using namespace std;

int a[1000001];

void init()
{
    for(int i = 0; i < 1000001; i++)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for(int i = 2; i <= 1000; i++)
    {
        if(a[i])
        {
            for(int j = i * i; j <= 1000000; j+= i)
            {
                a[j] = 0;
            }
        }
    }
}


int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool ok = true;
        for(int i = 2; i <= n/2; i++)
        {
            if(a[i] && a[n-i])
            {
                cout << i << " " << n - i << endl;
                ok = false;
                break;
            }
        }
        if(ok) cout << "-1" << endl; 
    }
}