#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() 
{
    string s;
    cin>>s;
    int arr[27] = {0};
    for(int i = 0;i <s.size();i++){
        arr[s[i]-'a']++;
    }
    // for(int i = 0;i<27;i++) cout<<arr[i]<<endl;

    int t; cin>>t;
    while(t--){
        char ch; 
        cin>>ch;
        cout<<arr[ch-'a']<<endl;
    }
    
}