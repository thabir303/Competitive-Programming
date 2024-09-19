#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
   int t; cin>>t;
   map<string,int>m;
   while(t--){
     string s; cin>>s;
     m[s]++;
     if(m[s]==1) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
   }
}