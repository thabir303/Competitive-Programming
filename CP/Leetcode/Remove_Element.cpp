#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
int main()
{

    int n, b;
    cin >> n;

    vector<ll> nums, v1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        nums.push_back(x);
    }
    int val;
    cin >> val;
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    cout<<nums.size()<<endl;
}