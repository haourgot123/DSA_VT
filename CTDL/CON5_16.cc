#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int L[n+1];
        for(int i = 0; i < n; i++) L[i] = a[i];
        int MAX = -1e9;
        for(int  i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++ )
            {
                if(a[i] > a[j])
                {
                    L[i]  = max(L[i], L[j] + a[i]);
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            MAX = max(MAX, L[i]);
        }
        cout << MAX << "\n";
    }
}