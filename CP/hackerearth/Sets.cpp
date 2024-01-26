#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
   ll q; cin>>q;
   set<ll>s; 
   while(q--){
    ll y,x; cin>>y>>x;
    if(y==1)
        s.insert(x);
    else if(y==2){
        s.erase(x);
    }
    else if(y==3){
        
        //set<ll>::iterator it=s.find(x);
        if(s.find(x)!=s.end())
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        //cout<<*it<<endl;
    }
   }
   //for(auto u: s) cout<<u<<endl;
}