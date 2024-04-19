#include <bits/stdc++.h>
using namespace std;

struct dta{
    int val, dem;
};

int Res(int a)
{
    set<int> s;
    queue<dta> q;
    q.push({a, 0});
    while(q.size())
    {
        dta tmp = q.front();
        q.pop();
        if(tmp.val == 1) return tmp.dem;
        if(tmp.val - 1 == 1) return tmp.dem + 1;

        if(tmp.val - 1 > 0 && s.find(tmp.val - 1) == s.end())
        {
            s.insert(tmp.val - 1);
            q.push({tmp.val - 1, tmp.dem + 1});
        }

        for(int i = 2; i*i <= tmp.val; i++)
        {
            if(tmp.val % i == 0)
            {
                if(s.find(tmp.val/i) == s.end())
                {
                    q.push({tmp.val/i, tmp.dem + 1});
                    s.insert(tmp.val/i);
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
        int n; cin >> n;
        cout << Res(n) << endl;
    }
}