#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll mxEl = a[0];
    ll mxIn = 0;

    for (ll i = 1; i < n; i++)
    {
        if (a[i] > mxEl)
        {
            mxEl = a[i];
            mxIn = i;
        }
    }
    ll mnEl = a[n - 1];
    ll mnIn = n - 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] < mnEl)
        {
            mnEl = a[i];
            mnIn = i;
            // cout<<mnEl<<" "<<i<<endl;
            // break;
        }
    }
    // cout<<mnEl<<" "<<mnIn<<" "<<mxEl<<" "<<mxIn<<endl;
    if (mxIn > mnIn)
        cout << abs((n - 1 - mnIn) + mxIn - 1) << endl;
    else
        cout << abs((n - 1 - mnIn) + mxIn) << endl;
}