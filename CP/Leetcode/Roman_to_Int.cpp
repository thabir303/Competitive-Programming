#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    char s2;
    
    int a=0;
    for(int i=0;i<s.size();i++)
    { 
        string I="1",V="5",X="10",L="50",C="100",D="500",M="1000";
        if((s[i]=='I' and s[i+1]=='V'))   { a+=(stoi(V)-stoi(I)); i++;}
        else if(s[i]=='I' and s[i+1]=='X'){ a+=(stoi(X)-stoi(I)); i++;}
        else if(s[i]=='X' and s[i+1]=='L'){ a+=(stoi(L)-stoi(X)); i++;}
        else if(s[i]=='X' and s[i+1]=='C'){ a+=(stoi(C)-stoi(X)); i++;}
        else if(s[i]=='C' and s[i+1]=='D'){ a+=(stoi(D)-stoi(C)); i++;}
        else if(s[i]=='C' and s[i+1]=='M'){ a+=(stoi(M)-stoi(C)); i++;}
        
        else if(s[i]=='I' and (s[i+1]!='V') or s[i+1]!='X') a+=1;
        else if(s[i]=='V') a+=5;
        else if(s[i]=='X' and (s[i+1]!='L' or s[i+1]!='C')) a+=10;
        else if(s[i]=='L') a+=50;
        else if(s[i]=='C' and (s[i+1]!='D' or s[i+1]!='M')) a+=100;
        else if(s[i]=='D') a+=500;
        else if(s[i]=='M') a+=1000;

    }
    cout<<a<<endl;
    // cin>>s2;
    // int a=stoi(s),b=stoi(s2);
    // cout<<a-b;
   

}