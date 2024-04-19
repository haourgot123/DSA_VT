#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack <string> st;
        string tmp = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ')')
            {
                string x = "";
                while(st.size() > 0 && st.top() != "(")
                {
                    x += st.top();
                    st.pop();
                }
                st.pop();
                if(st.size() && st.top() == "-")
                {
                    for(int j = 0; j < x.size(); j++)
                    {
                        if(x[j] == '+') x[j] = '-';
                        else if(x[j] == '-') x[j] = '+';
                    }
                }
                st.push(x);
            }
            else
            {
                st.push(string(1, s[i]));
            }
        }
        string ans = "";
        while(st.size() > 0)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;

    }
}