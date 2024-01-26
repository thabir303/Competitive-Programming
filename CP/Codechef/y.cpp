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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n + 1];
        vector<ll> v1, v2;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            ll y;
            cin >> y;
            v2.push_back(y);
        }
        ll mx = *max_element(v2.begin(), v2.end());
        // cout << mx << endl;
        for (ll i = 0; i < n; i++)
        {
            v1.push_back(a[i]);
        }
        // for(auto u:v1) cout<<u<<" ";
        // cout<<endl;
        sort(v1.begin() + (n - mx), v1.end());
        for (auto u : v1)
            cout << u << " ";
        cout << endl;
    }
}