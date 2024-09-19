#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ll n,m; cin>>n>>m;
    string s1,s2;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        s2+=";";
        mp[s2]=s1;
    }
    string s3,s4;
    for(int i=0;i<m;i++){
        cin>>s3>>s4;
        cout<<s3<<" "<<s4<<" #"<<mp[s4]<<endl;
    }
}