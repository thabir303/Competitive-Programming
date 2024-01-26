#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
   ll n;cin>>n;
   
   ll a[n+1];
   for(int i=0;i<n;i++){
    cin>>a[i]; 
   }
   ll k; cin>>k;
   // for(ll i=0;i<=n-k;i++){
   //    m=ar[i];
   //   for(ll j=1;j<k;j++){
   //     if(ar[i+j]>m)
   //     { 
   //       m=ar[i+j];
   //       // v1.push_back(m);
   //       cout<<m<<" ";
   //     }
   //   }
   // }
   multiset<ll>m;
   vector<ll>v;
   for(ll i=0;i<n;i++){
      m.insert(a[i]);
      if(m.size()==k){
         auto mx=m.rbegin();
         v.push_back(*mx);
         auto it=m.find(a[i-k+1]);
         m.erase(it);
      }
   }

   for(auto u:v) cout<<u<<" ";
   cout<<endl;

   // vector<ll>v;
   // for(int i=0;i<n-2;i++){
   //  ll m=*max_element(v2.begin()+i,v2.begin()+i+k);
   //  v.push_back(m);
   // }
   // for(auto u: v) cout<<u<<" ";
   // cout<<endl;
}