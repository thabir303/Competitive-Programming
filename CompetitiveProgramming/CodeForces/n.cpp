#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
read:
    while (t--)
    {
        ll k, x, a;
        cin >> k >> x >> a;

        ll ar[x + 5], c = 1,d=a;
        ar[0] = 1;
        a--;
        ll n;
        for (int i = 1; i <= x; i++)
        {
            n = ceil(1.0 * (c + 1) / (k - 1));
            ar[i] = n;
            a -= n;
            // cout<<a<<endl;
            if (a < 0)
            {
                no;
                goto read;
            }
            c += n;
        }
        if (d <= x)
        {
            no;
            goto read;
        }
        yes;
    }
}
