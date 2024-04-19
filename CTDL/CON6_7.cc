#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        int index1;
        int index2;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                index1 = i; 
                break;
            }
        }
        for(int j = n - 1; j >= 0; j--)
        {
            if(a[j] != b[j])
            {
                index2 = j;
                break;
            }
        }
        cout << index1 + 1 << " " << index2 + 1 << endl;
    }
}