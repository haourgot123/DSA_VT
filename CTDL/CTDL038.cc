#include<bits/stdc++.h>
using namespace std;

int find_max(string a, string b)
{
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '3') a[i] = '5';
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '3') b[i] = '5';
    }
    return stoi(a) + stoi(b);
}

int find_min(string a, string b)
{
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '5') a[i] = '3';
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '5') b[i] = '3';
    }
    return stoi(a) + stoi(b);
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int min = find_min(a,b);
        int max = find_max(a,b);
        cout << min << " " << max << endl;
    }
}