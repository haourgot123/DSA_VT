#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
       long long  n; cin >> n;
       long long a[n];
       deque<long long> dq;
       for(int i = 0; i < n; i++) cin >> a[i];
       for(int i = 0; i < n; i++)
       {
            int x = 0; // danh dau
            for(int j = i; j < n; j++)
            {
                if(a[i] < a[j])
                {
                    for(int k = j; k < n; k++)
                    {
                        if(a[j] > a[k])
                        {
                            x = 1;
                            dq.push_back(a[k]);
                            break;
                        }
                    }
                    break;
                }
            }
            if(x == 0) dq.push_back(-1);
       }
       while(n--)
       {
            cout << dq.front() << " ";
            dq.pop_front();
       }
       cout << endl;
    }
}