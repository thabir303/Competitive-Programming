#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll c = 0, m;
        for (ll i = 0; i < n; i++)
        {
            m = min(b, abs(v[i] - c) * a);
            f -= m;
            // cout<<m<<endl;
            // cout<<f<<endl;
            c = v[i];
            //cout<<c<<endl;
        }
        f>0 ? yes : no;
    }
}