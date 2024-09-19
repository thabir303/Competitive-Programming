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
        ll n,x; cin>>n>>x;
        if(x==0) 
        {
            for(ll i=1;i<=n;i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else if((n-x)<=1) cout<<-1<<endl;
        else{
        x = x+2;
        vector<ll>v;
        v.push_back(x);

        ll s=1;
        for(ll i=1;i<n;i++){
            if(i==x)
               s+=1;
            v.push_back(s);
            s+=1;
        }
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
        }
    }
}