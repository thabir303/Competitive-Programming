#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//#define ans 

int main()
{

   ll t; cin>>t;
   while(t--){
     ll n,k; cin>>n>>k;
     vector<ll>va(n);
     vector<ll>vb(n);

    for(ll i=0;i<n;i++)
        cin>>va[i];
    for(ll i=0;i<n;i++)
        cin>>vb[i];
     
    ll sum=0,mx=0,ans=0;
    for(ll i=0;i<n;i++){
        if(i==k) break;
         sum+=va[i];
         mx=max(mx,vb[i]);
         ll mul=sum+(k-i-1)*mx;
         ans=max(ans,mul);
     }
     cout<<ans<<endl;
   }
}