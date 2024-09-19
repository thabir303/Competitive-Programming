#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
// const N=2e5+10;
// ll ar[N];

int main()
{
    ll t;
    cin >> t;
read:
    while (t--)
    {
        ll n, k, x, cnt = 0;
        string s, st, ans;
        cin >> n >> k >> x >> s;

        for (auto u : s)
        {
            if (k > (ll)u - 97)
            {
                st.push_back(u);
            }
        }
        if (st.empty())
        {
            no;
            for (ll i = 0; i < n; i++)
            {
                cout << 'a';
            }
            cout << endl;
            goto read;
        }
        map<char, ll> m;
        for (auto u : st)
        {
            m[u]++;
            if (m.size() == k)
            {
                ans.push_back(u);
                cnt++;
                m.clear();
            }
        }
        // cout<<m.size()<<endl;
        // cout<<cnt<<endl;
        if (cnt >= n)
        {
            yes;
            goto read;
        }
        no;
        if (m.empty())
        {
            while (ans.size() < n)
            {
                ans.push_back(st[st.size() - 1]);
            }
            cout << ans << endl;
            goto read;
        }
        char ch;
        for (char c = 'a'; c < char(97 + k); c++)
        {
            if (m[c] == 0)
            {
                ch = c;
                // cout<<ch<<endl;
                break;
            }
        }
        while (ans.size() < n)
        {
            ans.push_back(ch);
        }
        cout << ans << endl;
        // for (ll i = 0; i < n; i++)
        // {  char c = 'a';
        //     for (ll i = 0; i < k; i++)
        //     {
        //         s += c;
        //         c++;
        //     }
        // }
        // cout << s << endl;
    }
}