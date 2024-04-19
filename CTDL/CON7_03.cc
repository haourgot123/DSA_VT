#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> tmp;
        while(ss >> word)
        {
            tmp.push_back(word);
        }
        for(int i = 0; i < tmp.size(); i++)
        {
            reverse(tmp[i].begin(), tmp[i].end());
        }
        for(int i = 0; i < tmp.size(); i++)
        {
            cout << tmp[i] << " ";
        }
        cout << endl;

    }
}