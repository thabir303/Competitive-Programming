#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

ll c;

int main() {
    
    string s;
    map<string,string>m;
    string s1,s2,ans;
    getline(cin,s);
    while(s!=""){
        istringstream iss(s);
        iss>>s1>>s2;
        m[s2]=s1;
        getline(cin,s);
    }
    while(cin>>s){
        //auto it==m.end()
        map<string,string>::iterator it=m.find(s);
        if(it==m.end()){
              cout<<"eh"<<endl;   
        }
        else  cout<<m[s]<<endl;
        
    }
    
    // if (s.empty() || all_of(s.begin(), s.end(), ::isspace)) {
    //    c++;
    //    cin>>ans;
    //    for(ll i=0;i<c;i++){
    //         if(m.count(ans)>=1){
    //         cout<<m[ans]<<endl;
    //         c--;
    //         }
    //         else {
    //             c--;
    //         }
    //     }
    //     //cout<<c<<endl;
    // } else {
        
    //     if(iss>>s1>>s2){
    //        m[s2]=s1;
    //     }
        
    // }
}
