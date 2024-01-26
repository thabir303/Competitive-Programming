#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

 const int N=2e5+10;
// const int LOG=17;
// int a[N];
// int m[N][LOG];
int lookup[N][110];

void SparseTable(int a[], int n){
	for (int i = 0; i < n; i++) lookup[i][0] = a[i];
	for (int j = 1; (1 << j) <= n; j++) { 
		for (int i = 0; (i + (1 << j) - 1) < n; i++) {
			if (lookup[i][j - 1] < lookup[i + (1 << (j - 1))][j - 1])
				lookup[i][j] = lookup[i][j - 1];
			else lookup[i][j] = lookup[i + (1 << (j - 1))][j - 1];
		}
	}
}

int main() 
{
   
  //  int n,q; cin>>n>>q;
  //  vector<int>v;
  //  for(int i=0;i<n;i++){
  //    int n; cin>>n;
  //    v.push_back(n);
  //  }
  //  for(int i=0;i<q;i++){
  //   int a,b; cin>>a>>b;
  //   int m=*min_element(v.begin()+a-1,v.begin()+b);
  //   cout<<m<<endl;
      
    int n, q; cin >> n >> q;
    int a[n + 1];
    for(int i = 0; i < n; i++) 
       cin >> a[i];
    SparseTable(a, n);
    while(q--) {
        int L, R; cin >> L >> R;
        L--; R--;
        int j = (int)log2(R - L + 1);
        if (lookup[L][j] <= lookup[R - (1 << j) + 1][j]) 
             cout << lookup[L][j] << endl;
        else cout << lookup[R - (1 << j) + 1][j] << endl;
    }

}
