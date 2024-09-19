#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{  
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<ll>v(n+1);
        for(ll i=0;i<n;i++) cin>>v[i];

        map<ll,ll>m;
        ll e=0,o=0;
        bool flag=false;

        for(ll i=0;i<n;i++){
            if(i%2==1)
            o+=v[i];
            else e+=v[i];
            //cout<<o<<" "<<e<<endl;
            ll diff=e-o;
           
            if((diff==0 or m.find(diff)!=m.end()) and !flag){
                flag=true;
                break;
            }
            m[diff]=i;
        }
        if(flag) yes
        else no
    }
}