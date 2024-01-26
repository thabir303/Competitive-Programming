#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;


int strStr(string haystack, string needle) {
        return haystack.find(needle);
};
int main()
{
    string haystack,needle; cin>>haystack>>needle;
    // int n1=haystack.size();
    // int n2=needle.size();
    cout<<strStr(haystack,needle);
}
    
