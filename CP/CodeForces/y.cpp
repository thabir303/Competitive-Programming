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
        ll s; cin >> s;
        ll a[s + 1];
        for (ll i = 0; i < s; i++) cin >> a[i];
        ll m = INT_MAX, n = INT_MAX, cnt = 0;
        ll temp;
        for (ll i=0; i<s; i++){
            if (m>n) {
                temp=m;
                m=n;
                n=temp;
                cout<<"swap : "<<" "<<n<<" "<<m<<endl;
            }
            if (a[i]<= m) { m=a[i];
            cout<<"m : "<<" "<<m<<endl; }
            else if (a[i]<=n){  n=a[i];
            cout<<"n: "<<n<<endl; 
            } 
            else{
                cout<<"m from cnt : "<<m<<" n  from cnt : "<<n<<" "<<a[i]<<endl;
                m=a[i];
                cnt++;
                //cout<<"cnt: "<<" "<<m<<endl;
                }
            }cout << cnt << endl;
        }
        
    }
