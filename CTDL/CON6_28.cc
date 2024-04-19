#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector <int> v[n];
        for(int i = 0; i < n; i++)
        {
            int x = a[i];
            int pos = i - 1;
            while(pos >= 0 && a[pos] > x)
            {
                a[pos+1] = a[pos];
                pos --;
            }
            a[pos+1] = x;
            for(int j = 0; j <= i; j++)
            {
                v[i].push_back(a[j]);
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            cout << "Buoc: " << i << ": ";
            for(int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    
}