#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n; cin>>n;
        string s,s1; cin>>s>>s1;
        ll cnt=0,cnt1=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]==s1[i]) continue;
            else if(s[i]=='1'){
                cnt++;
            }
            if(s1[i]=='1') cnt1++;
        }
        cout<<max(cnt,cnt1)<<endl;
    }
}