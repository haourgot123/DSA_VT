#include <bits/stdc++.h>
using namespace std;

int a, b;
vector <int> v;

void uso()
{
    for(int i = 1; i <= sqrt(b); i++)
    {
        if(b % i == 0)
        {
            v.push_back(i);
            if(b / i != i) v.push_back(b/i);
        }
    }
    sort(v.begin(), v.end());
}


void solve()
{
    cin >> a >> b;
    int visit[v.size()];
    int k = 2;
    while(1)
    {
        uso();
        int tmp = a;
        memset(visit, 0, sizeof(visit));
        int kt  = 1;
        for(int i = 0; i < v.size(); i++)
        {
            if(visit[i] == 0 && tmp >= v[i])
            {
                tmp -= v[i];
                visit[i] = 1;
                if(tmp == 0)
                {
                    kt = 0;
                    break;
                }
            }
        }
        if(kt)
        {
            a *= k;
            b *= k;
            k++;
        }
        else
        {
            for(int i = 0; i < v.size(); i++)
            {
                if(visit[i] == 1)
                {
                    if(i != v.size() - 1)
                        cout << "1/" << v[i] << " + ";
                    else cout << "1/" << v[i];
                }

            }
        }

    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}