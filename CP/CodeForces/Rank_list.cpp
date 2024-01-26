#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&p1,pair<int,int>&p2){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}
int main(){
   
   int t,k; cin>>t>>k;
   vector<pair<int,int>>v(t);
   for(int i=0;i<t;i++){
    
    cin>>v[i].first>>v[i].second;
    v[i].first*=-1;
   }
   int cnt=0;
   sort(v.begin(),v.end());
   for(auto u:v){
    if(u==v[k-1]) cnt++;
   }
   cout<<cnt<<endl;
}