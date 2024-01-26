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
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            if (i < n - x)
                ans += a[i];
            else
                ans -= a[i];
        }
        ll temp = ans;
        ll mn=(n-x);
        for (ll i = n - 1; i >= n - k; i--)
        {
            if (i >= mn)
                ans += a[i];
            if (mn - 1 >= 0)
                ans -= 2 * a[mn - 1];

            (mn)--;

            temp = max(temp, ans);
        }
        cout << temp << endl;
    }
}