#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
    return true;
    return false;
}
int main()
{
    string s1,s2,s3; 
    int cnt1=0,cnt2=0,cnt3=0;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    for(int i=0;i<s1.size();i++){
     if(isvowel(s1[i])) cnt1++; 
    }
    for(int i=0;i<s2.size();i++){
     if(isvowel(s2[i])) cnt2++; 
    }
    for(int i=0;i<s3.size();i++){
     if(isvowel(s3[i])) cnt3++; 
    }
    if(cnt1==5 and cnt2==7 and cnt3==5) cout<<"YES";
    else cout<<"NO";

}