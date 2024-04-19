#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int L[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            L[i] = 1;
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(a[i] > a[j])
                    L[i] = max(L[i], L[j] + 1);
            }
        }
        int MAX = 0;
        for(int i = 0; i < n; i++)
        {
            MAX = max(MAX, L[i]);
        }
        cout << MAX << endl;
    }
}