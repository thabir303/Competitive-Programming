#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
   ll t; cin>>t;
   read:
   while(t--){
    string s,s1,s2; cin>>s;
    ll l=s.size(); bool flag=true;

    for(ll i=1;i<l;i++ and flag){

         s1=s.substr(0,i);
         s2=s.substr(i);
         int a,b; 
         a=stoi(s1);
         b=stoi(s2);
         if(s1[0]!='0' and s2[0]!='0' and b>a){
            flag=false;
            cout<<s1<<" "<<s2<<endl;
            //break;
            goto read;
         }
         else if(a==b or a>b){ 
            cout<<-1<<endl;
            goto read;
        }
    }
    //if(!flag) 
   }
}