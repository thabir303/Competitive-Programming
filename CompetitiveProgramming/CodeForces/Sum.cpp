#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a[4], sum = 0;
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + 3);

        ((sum-a[1]-a[0])==(a[2])) ? yes : no;
        
    }
}