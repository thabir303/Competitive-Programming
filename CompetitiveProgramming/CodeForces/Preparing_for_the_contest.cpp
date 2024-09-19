#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//#define ans 

int main()
{
      ll t; cin>>t;
      while(t--){
         ll n,k;
         cin>>n>>k;
         ll a[n+1];
         for(ll i=0;i<n;i++)
             a[i]=i+1;
         if(k==0){
            for(ll i=n-1;i>=0;i--){
                cout<<a[i]<<" ";
            }
            cout<<endl;
         }
         else if(k==n-1){
            for(ll i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
         }
         else{
            cout<<a[0]<<" ";
            for(ll i=n-k;i<n;i++){
                cout<<a[i]<<" ";
            } 
            for(ll i=n-k-1;i>=1;i--){
                cout<<a[i]<<" ";
            }
            cout<<endl;

         }

      }


}