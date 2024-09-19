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
        ll n; cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ll sum=0;
        for(ll i=1;i<n;i++){
            sum+=a[i]-a[i-1];
        }
        cout<<sum<<endl;
    }
}
