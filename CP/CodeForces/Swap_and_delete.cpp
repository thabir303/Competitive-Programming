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
        string s,s1; cin>>s;
        ll l=s.size();
        ll a=0,b=0;
        for(ll i=0;i<l;i++){
            if(s[i]=='0') a++;
            else b++;
        }
        if(a==b) cout<<"0"<<endl;
        else{
           s1=s;
           for(ll i=0;i<l;i++){
            if(s[i]=='1' and a>0){
                s[i]='0';
                a--;
            }
            else if(s[i]=='0' and b>0){
                s[i]='1';
                b--;
            }
           }
        ll min=0;
         for(ll i=0,j=0;i<l;i++){
            if(s1[j]==s[i]) min++;
            else j++;
        }
        cout<<min<<endl;
        
        }
        

    }

}