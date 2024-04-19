#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.size();
        stack <int> st;
        st.push(-1);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.size() > 0)
                {
                    res = max(res, i- st.top());
                }
                if(st.size() == 0) st.push(i);
            }
        }
        cout << res << "\n";
    }
}