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
    ll t;
    cin >> t;

    while (t--)
    { // read:
        ll n, x;
        cin >> n >> x;
        string s;
        ll a[n + 1], b;
        cin >> s;
        // if(s[0]=='0') no
        // else{
        bool flag = false;
        ll cnt=0;
        if(s[0]=='1'){
            b=x;
        }
        else flag=true;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (b == 0)
                {
                    flag = true;
                    // goto read;
                }
                else
                    b--;
                // cout<<"b: for 0 " <<b<<endl;
            }
            else
            {
                b = x;
                // cout<<"b: for 1 " <<b<<endl;}
            }
            
            // cout<<b<<" "<<x<<endl;
        }
        if (flag ) no
        else yes
    }
}
