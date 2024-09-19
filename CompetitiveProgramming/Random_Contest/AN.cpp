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
    ll y,x; cin>>y;
    if(y==1){
        cin>>x;
        s.insert(x);
    }
    else if(y==2){
        cin>>x;
        s.erase(x);
    }
    else if(y==3){
        ll m=*s.begin();
        cout<<m<<endl;   
    }
   }
  
}