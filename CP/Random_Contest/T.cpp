#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{

     ll n; cin>>n;
     vector<ll>v(n);
     for(ll i=0;i<n;i++)
        cin>>v[i];
     ll ans=0,sum=INT_MIN;
     for(ll i=0;i<n;i++){
        ans+=v[i];
        if(ans>sum)
           sum=ans;
        if(ans<0)
          ans=0;
     }
     cout<<sum<<endl;
}