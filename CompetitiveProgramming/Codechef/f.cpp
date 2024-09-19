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
        ll n; cin>>n;
        ll a[n+1],b[n+1];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n,greater<ll>());
        sort(b,b+n);
        // for(ll i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // for(ll i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // }
        vector<ll>va,vb;
        ll sum=0,cnt=0;
        for(ll i=0,j=0;i<n;i++){
            va.push_back(a[i]);
            vb.push_back(b[i]);
        }
        for(ll i=0,j=0;i<n;i++){
            sum=a[i]+b[i];
            if(sum==a[0]+b[0]){
                cnt++;
            }
        }
        if(cnt==n) {
            for(auto u: va) { 
                cout<<u<<" ";

        }
        cout<<endl;
        for(auto u: vb) { 
                cout<<u<<" ";

        }
        cout<<endl;
    }
    else cout<<-1<<endl;


}
}