#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{

    int q;
    cin >> q;
    multiset<ll> m;
    while (q--)
    {
        char Q;
        cin >> Q;

        if (Q == '1')
        {
            ll v;
            cin >> v;
            m.insert(1 << v);
        }
        else
        {
            ll v;
            cin >> v;
            set<ll> s;
            s.insert(0);

            for (auto u : m)
            {
                set<ll> s1;
                for (auto u1 : s)
                {
                    s1.insert(u1 + u);
                }
                s.insert(s1.begin(), s1.end());
            }
            ll ans = s.count(v);
            if (ans)
                yes else no
        }
    }
}
