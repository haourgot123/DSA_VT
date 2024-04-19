#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        deque<int> q;
        int n; cin >> n;
        while(n--)
        {
            int x; cin >> x;
            if(x == 1)
            {
               cout << q.size() << endl; 
            }
            else if(x == 2)
            {
                if(q.size() == 0) cout << "YES"<< endl;
                else cout << "NO" << endl;
            }
            else if(x == 3)
            {
                int k; cin >> k; 
                q.push_back(k);
            }
            else if(x == 4)
            {
                if(q.size()) q.pop_front();
            }
            else if(x == 5)
            {
                if(q.size()) cout << q.front() << endl;
                else cout << -1 << endl;
            }
            else if(x == 6)
            {
                if(q.size() == 0) cout << -1 << endl;
                else
                {
                    cout << q.back() << endl;
                }
            }
        }
    }
}