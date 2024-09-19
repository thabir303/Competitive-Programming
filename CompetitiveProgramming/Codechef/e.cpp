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
    while (t--)
    {
        ll n, x, y, m;
        cin >> n >> x >> y;
        ll d = y / 3;
        m = n;
        ll ans = m - d;   
        ll an = x;
        an -= d;
        if (x < n ) no else if ((x == n and y < 3 * n)) no 
        else if (an < 2 * ans) no else yes
    }
}