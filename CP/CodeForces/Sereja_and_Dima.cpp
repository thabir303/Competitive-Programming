#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n; cin>>n;
   vector<int>v;

   int x;
   for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
   }
   int s=0,d=0;
   bool flag=true;
   while(!v.empty()){
    if(flag){
    if(v[0]<v.back()){
     s+=v.back();
     v.pop_back();
   }
   else{
    s+=v[0];
    v.erase(v.begin());
   }
   flag=false;
   }  
   else{
    if(v[0]<v.back()){
     d+=v.back();
     v.pop_back();
   }
   else{
    d+=v[0];
    v.erase(v.begin());
   }
   flag=true;
   }

}

   cout<<s<<" "<<d<<endl;
}