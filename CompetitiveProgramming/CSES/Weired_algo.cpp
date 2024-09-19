#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
    ll n,a,b; cin>>n;
    vector<ll> v;
    v.push_back(n);
    while(n){
        if(n==1) break;
        if(n%2==0) {  
         a=n/2;    
         n/=2; 
         //cout<<"a: "<<a<<endl; 
         v.push_back(a);
        }
        else{
            b=(n*3)+1;
            n=(n*3)+1; 
            //cout<<"b: "<<b<<endl;
            v.push_back(b);
        }
    }
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}