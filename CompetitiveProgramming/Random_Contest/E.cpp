#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    map<ll,ll>m;
    
    ll n,x,a,b; cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        //ll y; cin>>y;
        cin>>v[i];
        //m[y]++;
    }
    for(int i=0;i<n;i++){
        ll ans=x-v[i];
        if(m[ans]>=1){
            cout<<i+1<<" "<<m[ans]<<endl;
            return 0;
        }
        m[v[i]]=i+1;
    }
    cout<<-1<<endl;
    //cout<<a<<b<<endl;





}