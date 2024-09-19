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
        ll n,x;
        cin >> n;
        ll a[n + 1];
        if(n==1) {
            ll x; cin>>x;
            cout<<x<<endl;
        }
        else{
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (ll i = 0; i <= n - 1;){
            if((a[i]=='0' and a[i+1]=='1') or (a[i]=='1' and a[i+1]=='0')){
            sum ++;
            i+=2;
            if(i>=n) goto read;
            }
            else sum+=0;
        }
        read:
        cout << sum << endl;
        }
    }
}