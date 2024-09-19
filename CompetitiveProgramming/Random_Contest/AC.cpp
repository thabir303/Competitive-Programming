#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
    ll n; cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        m[a]++;
    }
    ll ans=0;
    for(auto u:m){
     if(u.second>=u.first)
     ans+=(u.second-u.first);
     else ans+=u.second;
    }
    cout<<ans<<endl;
}