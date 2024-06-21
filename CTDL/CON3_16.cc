#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int s, d;
        cin >> s >> d;
        if(s  > 9 * d)
        {
            cout << -1 << endl;
        }
        else
        {
            int res[d];
            s -=1;
            for(int i = d -1; i >= 1; i--)
            {
                if(s >= 9)
                {
                    res[i] = 9;
                    s-=9;
                }
                else
                {
                    res[i] = s;
                    s = 0;
                }
            }
            res[0] = s + 1;
            for(int x : res) cout << x;
            cout << endl;
        }
    }
}