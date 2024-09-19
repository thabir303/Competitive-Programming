#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
// #define ans

int main()
{

    ll n;
    cin >> n;
    string s=""; 
    char c[n+1][n+1];
    for (ll i = n; i >= 1 ; i--)
    {
        for (ll j = 1; j <= n ; j++)
        {   if(j!=(n/2)+1)
            a[i][j]='*';
        }
    }
}