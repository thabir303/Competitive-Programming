#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
  ll n,q; cin>>n>>q;
  ll a[n+1],sum[n+1];
  a[0]=0;
  memset(sum,0,(n+1)*sizeof(ll));
  for(int i=1;i<=n;i++){
    cin>>a[i];
    sum[i]+=a[i]+sum[i-1];
  }
  ll q1,q2; 
  for(int i=0;i<q;i++){
    cin>>q1>>q2;
    cout<<sum[q2]-sum[q1-1]<<endl;
  }

}