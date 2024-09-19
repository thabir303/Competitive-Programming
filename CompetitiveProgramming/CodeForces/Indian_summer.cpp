#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int t; cin>>t;
   vector<pair<string,string>>v(t);
   for(int i=0;i<t;i++){  
   cin>>v[i].first>>v[i].second;
   }
   sort(v.begin(),v.end());
   int x=unique(v.begin(),v.end())-v.begin();
   cout<<x<<endl;

}