#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin >> t;
	while(t--){
    ll n,m; cin>>n>>m;
    set<ll>v1,v2;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        v1.insert(x);
    }
	for(ll i=0;i<m;i++){
        ll y; cin>>y;   
        if(v1.find(y)!=v1.end())
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v1.insert(y);
    }
	}
}