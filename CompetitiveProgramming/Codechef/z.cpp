#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
// const N=2e5+10;
// ll ar[N];

int main()
{
   ll t; cin>>t;
   while(t--){
    ll n; cin>>n;
    ll sq=sqrt(n);
    if(n%2==1){
        sq++;
    }
    cout<<sq/2<<endl;
   }

}