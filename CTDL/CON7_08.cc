#include  <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack <string> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                string tmp = "";
                while(!st.empty() && st.top() != "(" )
                {
                    tmp += st.top();
                    st.pop();
                }
                st.pop();
                // reverse(tmp.begin(), tmp.end());
                if(st.size() && st.top() == "-")
                {
                    for(int i = 0; i < tmp.size(); i++)
                    {
                        if(tmp[i] == '+') tmp[i] = '-';
                        else if(tmp[i] == '-') tmp[i] = '+';
                    }
                }
                st.push(tmp);
            }
            else st.push(string(1, s[i]));
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}