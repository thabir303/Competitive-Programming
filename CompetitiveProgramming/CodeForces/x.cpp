#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
// #define ans

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        ll cnt=0,p=0,m=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='+'){
                p++;
                cnt++;
            }else { 
                cnt--;
                m++;
            }
        }
        // if(p==n or m==n) cout<<n<<endl;
        // else 
        cout<<abs(cnt)<<endl;
    }
}