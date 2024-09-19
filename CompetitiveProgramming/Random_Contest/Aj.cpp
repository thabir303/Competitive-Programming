#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define newLine "\n"
#define printYes cout << "YES" << newLine;
#define printNo cout << "NO" << newLine;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, q; 
    cin >> n >> q;
    vector<vector<ll>> v(n);

    while(q--) {
        ll q1, q2, q3;
        cin >> q1;

        if(q1 == 0) {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
        } 
        else if(q1 == 1) {
            ll x;
            cin >> x;
            int idx=0;
            for(;idx<v[x].size()-1;idx++){
                cout << v[x][idx] << " ";
            }
            
            if(idx<v[x].size()) 
                cout << v[x][idx] << "\n";
            else cout << "\n";
        } 
        else if(q1 == 2) {
            ll x;
            cin >> x;
            v[x].clear();
        } 
    }
  
}