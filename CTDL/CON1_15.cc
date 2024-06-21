#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    for(int k = 1; k <= t; k++)
    {
        int a[100];
        int x; cin >> x;
        string s; cin >> s;
        int n = s.size();
        for(int i = 1; i <=s.size(); i++)
        {
            a[i] = int(s[i - 1] - '0');
        }
        int i = n - 1;
        while(i >= 1 && a[i] >= a[i + 1]) i--;
        if(i == 0)
        {
            cout << x << " BIGGEST" << endl;
        }
        else
        {
            cout << x << " ";
            int j = n;
            while(a[j] <= a[i]) j--;
            swap(a[j], a[i]);
            reverse(a + i + 1, a + n + 1);
            for(int j = 1; j <= n; j++) cout << a[j];
            cout << endl;
        }
    }
}