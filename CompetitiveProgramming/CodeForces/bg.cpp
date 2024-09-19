#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{ 
      ll t; cin>>t;
      while(t--){
        ll a,b; cin>>a>>b;
        bool flag1=false,flag2=false;
        ll x=__gcd(a,b);
        ll m=(a*b)/x;
        if(m == b and (!flag1 and !flag2)){
            ll i;
            for(i=2;i*i<=b;i++){
                if(i<=a && a%i==0){
                    flag1=true;
                    break;
                }
                else if(b%i==0){                  
                    flag2=true; break;
                }
            }
            (flag1 or flag2) ? cout<<b*i<<endl : cout<<b*b<<endl;
            // if(flag1 or flag2)
            //  cout<<b*i<<endl;
            // else cout<<b*b<<endl;
        }
        else cout<<m<<endl;
      }

}