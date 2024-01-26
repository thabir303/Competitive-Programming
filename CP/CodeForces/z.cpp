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
        ll a,b; cin>>a>>b;
        ll d=abs(a-b);
        if(d%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

    }
}