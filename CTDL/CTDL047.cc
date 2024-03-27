#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int num4, num7;
        int kt = 1;
        for(int i = n / 7; i >= 0; i--)
        {
            if((n - i * 7) % 4 == 0)
            {
                num7 = i;
                num4 = (n - num7 * 7) / 4;
                kt = 0;
                break;
            }
        }
        if(kt == 1) cout << -1 << endl;
        else
        {
            for(int i = 0; i < num4; i++) cout << 4;
            for(int i = 0; i < num7; i++) cout << 7;
            cout << endl;
        }
    }
}