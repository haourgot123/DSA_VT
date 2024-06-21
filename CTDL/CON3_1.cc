#include <bits/stdc++.h>
using namespace std;

int c[]  = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    int t; cin >> t;
    while(t--) 
    {
        int n; cin >> n;
        int ans = 0;
        for(int i = 9; i >= 0; i--)
        {
            if(n >=  c[i])
            {
                ans += n/c[i];
                n = n % c[i];
            }
        }
        cout << ans << endl;
    }
}