#include <bits/stdc++.h>
using namespace std;

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
        for(int i=0; i<n; i++)
        {
            cin >> data[i].x >> data[i].y;
        }
        double MIN = 10000000;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int x = data[i].x - data[j].x;
                int y = data[i].y - data[j].y;
                int dist = x * x + y * y;
                double dist1 = sqrt(dist*1.0);
                MIN = min(MIN, dist1);
            }
        }
        cout << fixed << setprecision(6) << MIN << endl;
    }
}