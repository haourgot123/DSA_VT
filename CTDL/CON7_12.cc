#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int len = s.size();
        stack <string > st;
        for(int i = len - 1; i >= 0; i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                string f1 = st.top(); st.pop();
                string f2 = st.top(); st.pop();
                string tmp = '(' + f1 + s[i] + f2 + ')';
                st.push(tmp);
            }
            else st.push(string(1, s[i]));
        }
        cout << st.top() << endl; 
    }
}