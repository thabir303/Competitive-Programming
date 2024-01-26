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
  ll n,s=0,a,cnt=0; 
  cin>>n>>a;
  map<ll,ll>m;
  m[0]=1;
  ll ar[n+1];
  for(ll i=1;i<=n;i++){
    cin>>ar[i];
    s+=ar[i];
    if(m[s-a]){
      cnt++;
    }
    m[s]=1;
  }
  cout<<cnt<<endl;
}