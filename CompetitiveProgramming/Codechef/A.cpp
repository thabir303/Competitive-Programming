#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//const N=2e5+10;
//ll ar[N];

int main()
{
    ll t; cin>>t;
    while(t--){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>m,mp;
    if(n==4){
        if(v[0]+v[1]==v[2]+v[3])
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else {
        for(ll i=0;i<n;i++)
            m[v[i]]++;
        if(m.size()==1)
         cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
     }     

    }

}