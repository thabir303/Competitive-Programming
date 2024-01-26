#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    
    while (t--) {
        ll n, cnt = 0;
        cin >> n;
        vector<int> graph(n+1,0);

        for (ll i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            graph[u]++;
            graph[v]++;
        }

        for (ll i = 1; i <= n; i++) {
            if (graph[i] == 1)
                cnt++;
        }
        ll ans = (cnt+1)/2;
        cout << ans << endl;
    }

}
