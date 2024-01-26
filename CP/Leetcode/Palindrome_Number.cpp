#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x; cin>>x;
    string s,s2;
    s=to_string(x);
    for(int i=s.size()-1;i>=0;i--)
    {
        s2+=s[i];
    }
    if(s==s2) cout<<1<<endl;
    else cout<<2<<endl;

}