#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
    ll n; cin>>n;
    for(int i=1;i<=n;i++){
       ll n,r; cin>>n>>r;

       map<pair<ll,ll>,bool>m;

       bool flag=false;
       for(int i=0;i<r;i++){
          ll j,k; cin>>j>>k;
          bool ans=m[{j,k}];
          if(ans) flag=true;
          m[{j,k}]=1;
       }
       if(flag) cout<<"Scenario #"<<i<<": "<<"impossible"<<endl;
       else cout<<"Scenario #"<<i<<": "<<"possible"<<endl;

    }


}