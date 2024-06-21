#include <bits/stdc++.h>
using namespace std;


// y tuong: so cach di den 1 o bat ki = so cach di den o ben trai no + so cach di den o phia tren no
// co so QHD: a[0][1] = 1;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int m, n; cin >> m >> n;
        int a[m+1][n+1] = {};
        a[0][1] = 1;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                int x; cin >> x;
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
        cout << a[m][n] << endl;
    }
}