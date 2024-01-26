#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
// const N=2e5+10;
// ll ar[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v1, v2;
        ll cnt = 0;
        ll mx = -99999999, mn = 9999999999;
        while (n--)
        {
            ll a, b;
            cin >> a;

            if (a == 1)
            {
                cin >> b;
                mx = max(mx, b);
            }
            else if (a == 2)
            {
                cin >> b;
                mn = min(mn, b);
            }

            if (a == 3)
            {
                cin >> b;
                v1.push_back(b);
            }
        }
        if (mx > mn)
            cnt = 0;
        else
        {
            cnt = mn - mx + 1;
        }
        for (auto it : v1)
        {
            if (it >= mx and it <= mn)
                cnt--;
        }
        cout << cnt << endl;
    }
}