#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
   ll t; cin>>t;
   while(t--){
    ll n; cin>>n;
    set<char>s;
    string st; cin>>st;
    for(int i=0;i<n;i++){
        s.insert(st[i]);
    } 
    ll ans=s.size()*2;
    cout<<(n-s.size())+ans<<endl;   
    // for(auto u:s) cout<<u<<" ";
    // cout<<endl;

   }

}