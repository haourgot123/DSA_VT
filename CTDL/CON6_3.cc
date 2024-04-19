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
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int tmp = a[i];
            bool ok = true;
            int index;
            for(int j = i + 1; j <n; j++)
            {
                if(tmp > a[j])
                {
                    tmp = a[j];
                    index = j;
                    ok = false;
                }
            }
            if(ok == false)
            {
                swap(a[i], a[index]);
                ans++;
            }  
        }
        cout << ans << endl; 
    }
}