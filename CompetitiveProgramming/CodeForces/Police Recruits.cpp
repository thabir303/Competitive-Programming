#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
// const N=2e5+10;
// ll ar[N];

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0,cnt1 = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x > 0)
        {
            cnt += x;
        }
        else
        {
            if (cnt < 1)
            {
                ++cnt1;
            }
            else
            {
                --cnt;
            }
        }
    }
    cout << cnt1;
}
