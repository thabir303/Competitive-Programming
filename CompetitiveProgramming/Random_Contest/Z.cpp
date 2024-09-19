#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
  ll t; cin>>t;
  read:
  while(t--){
  unordered_set<ll>s;
  //set<ll>s1;
   ll n; cin>>n;
   ll a[n+1];
   for(int i=0;i<n;i++){
    ll x; cin>>a[i];
    s.insert(a[i]);
   } 
   bool flag=true;
   for(ll i=1;i<n-1;i++){
      if((a[i]>a[i-1] and a[i]>a[i+1]) and s.size()==n and flag){
      cout<<"YES"<<endl;
      cout<<i<<" "<<i+1<<" "<<i+2<<endl;
      goto read;
   }
   }
   cout<<"NO"<<endl;
   }
} 