#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() {
    //     int t; cin >> t;
    //     cin.ignore(); 
    //     while(t--) {
    //     string str;
    //     cin>>str; 
    //     stack<char> s;
    //     ll c=0;
    //     for (ll i = 0; i < str.size(); i++) {
    //         if (str[i] == '(' || str[i] ==')')
    //             s.push(str[i]);
    //         else if (((str[i] == ')' && s.top() == '('))) {
    //             s.pop(); c++;
    //         }
    //         }
    //    // }
    //     //for(auto u:s) cout<<u<<" "<<endl;
    //     ll l=s.size();
    //     // while(!s.empty()){
    //     //     cout<<s.top()<<" ";
    //     //     s.pop();
    //     // }
    //     // cout<<endl;
    //      if (s.empty())
    //         cout << str.size() << endl;
    //      else{
    //          cout<<(str.size()-c)<<endl;
    //      }
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