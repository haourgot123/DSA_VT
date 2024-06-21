#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int tu, mau;
        cin >> tu >> mau;
        while(mau % tu)
        {
            int mau_moi = mau/tu + 1;
            cout << "1/" << mau_moi << " + ";
            tu = (tu * mau_moi) - mau;
            mau = mau_moi * mau;
        }
        cout << "1/" << mau/tu << endl;
    }
}