#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s; cin>>s;
        ll n=stoi(s);
        ll sz=s.size();
        vector<ll>v;
        if(sz==1){
            cout<<1<<endl<<s<<endl;
        }
        else {
            ll m=10;
            for(ll i=0;i<n-1;i++){
                
                ll x=n%m; //n/=10;
                if(x!=0)
                v.push_back(x);
                n-=x;
                m*=10;
            }
            cout<<v.size()<<endl;
            for(auto u:v) cout<<u<<" ";
            cout<<endl;
        }



    }
}
