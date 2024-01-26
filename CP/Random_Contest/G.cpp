#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{

    ll n; cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}