#include <bits/stdc++.h>
using namespace std;



int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            char max = s[i];
            int index = -1;
            for(int j = i + 1; j < s.size(); j++)
            {
                if(s[j] >= max)
                {
                    max = s[j];
                    index = j;
                }
            }
            if(index != -1)
            {
                if(k == 0) break;
                else
                {
                    swap(s[i], s[index]);
                    k-=1;
                }
            }
        }
        cout << s << endl;
    }
}