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
        string s,s2=""; cin>>s;
        //if(n<=3) cout<<s<<endl;
        map<ll,ll>m;
        m['a']=1;
        m['e']=1;
        //s2+=s[0];
        for(ll i=0;i<n;i++){
            if(m[s[i]]){
                s2+=s[i];
                ll j=i+1;
                if(j+1<=n-1){
                    if(m[s[j]]==0 and m[s[j+1]]==0){
                        s2+=s[j];
                        s2+='.';
                        i=j;
                    }
                    else s2+='.';
                }
            }
            else s2+=s[i];
        }
        cout<<s2<<endl;
    }
}