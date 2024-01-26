#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() {
    string s; cin>>s;
    stack<char>st;
    ll c=0,ans=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='(') {
            st.push(s[i]);
            c++;
        }
        else if(!st.empty() and s[i]==')'){
            c--;
            st.pop();
            ans+=2;
        }
        }
        cout<<ans<<endl;
}