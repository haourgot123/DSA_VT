#include <bits/stdc++.h>
using  namespace std;

struct point{
    int x, y;
};


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        point data[n];
        for(int i = 0; i < n; i++)
        {
            cin >> data[i].x >> data[i].y;
        }
        double res = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int x = data[i].x - data[j].x;
                int y = data[i].y - data[j].y;
                int q = x * x + y * y;
                double dis = sqrt(q * 1.0);
                res = min(res, dis); 
            }
        }
        cout << fixed << setprecision(6) << res << endl;
    }
}