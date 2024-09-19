#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
// const N = 2e5 + 10;
// ll ar[N];

int main()
{
    ll a, b;
    cin >> a >> b;
    for (ll i = 1; i <= a; i++)
    {
        if (i % 4 == 2)
        {
            for (ll i = 1; i < b; i++)
                cout << ".";
            cout << "#";
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (ll i = 1; i < b; i++)
                cout << ".";
        }
        else
        {
            for (ll i = 1; i <= b; i++)
                cout << "#";
        }
        cout << endl;
    }
}