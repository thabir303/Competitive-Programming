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
        ll a,b; 
        vector<pair<ll,ll>>m;
        for(ll i=1;i<=4;i++)
        {
            cin>>a>>b;
            m.push_back({a,b});
        }
        //cin>>a>>b>>c>>d>>e>>f>>g>>h;
        sort(m.begin(),m.end());
        ll c=0,d,e,f,g;
        for(ll i=0;i<1;i++){
            d=m[i].second;
            e=m[i+1].second;
            f=m[i+2].second;
            g=m[i+3].second;
        }
        cout<<abs(e-d)*abs(g-f)<<endl;
    }
}