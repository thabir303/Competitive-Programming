#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n; cin>>n;

        int v[n+1];
        v[0]=1;
        v[1]=1;
        for(int i = 2; i<=n; i++){
                v[i] = v[i-1] + v[i-2];
        }
        cout<<v[n-1]<<endl;
}