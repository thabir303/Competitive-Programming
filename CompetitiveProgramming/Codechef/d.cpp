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
    ll x,y; cin>>x>>y;
    if(y>=x-1) cout<<1<<endl;
    else{
        ll c=ceil((x*1.0)/(y+1));
        ll m=max((x-2*y),c);
        cout<<m<<endl;
    }

    }

}