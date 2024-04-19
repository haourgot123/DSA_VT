#include <bits/stdc++.h>
using namespace std;

long long cat[101];

void init()
{
    cat[0] = 1;
    for(int i = 1; i <= 100; i++)
    {
        for(int j = 0; j <= i - 1; j++)
        {
            cat[i] += cat[j]*cat[i-j-1];
        }
    }
}



int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << cat[n] << endl;
    }

}