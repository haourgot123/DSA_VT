#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    stack <string> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')')
        {
            string tmp = "";
            while(st.size() > 0 && st.top() != "(")
            {
                tmp += st.top();
                st.pop();
            }
            st.pop();
            if(st.size() > 0 && st.top() == "-")
            {
                for(int j = 0; j < tmp.size(); j++)
                {
                    if(tmp[j] == '-') tmp[j] = '+';
                    else if(tmp[j] == '+') tmp[j] = '-';
                }
            }
            st.push(tmp);
        }
        else st.push(string(1, s[i]));
    }
    string ans = "";
    while(st.size() > 0)
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans; 
}



int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        string cp1 = solve(s1);
        string cp2 = solve(s2);
        if(cp1 == cp2)
        {
            cout << "YES" << endl;
        }
        else  cout << "NO" << endl;
    }
}