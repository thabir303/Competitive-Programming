#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
   ll n, q;
   cin >> n >> q;
   
   multiset<ll> elements;

   for (ll i = 0; i < n; i++) {
      ll x;
      cin >> x;
      elements.insert(x);
   }

   for (ll i = 0; i < q; i++) {
      ll a, b;
      cin >> a >> b;

      // Find the minimum element in the subarray [a, b)
      auto it = elements.lower_bound(a);  // lower_bound finds the first element not less than a
      while (it != elements.end() && *it < b) {
         cout << *it << endl;
         ++it;
      }
   }

   return 0;
}
