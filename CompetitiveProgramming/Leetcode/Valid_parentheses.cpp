#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main() {
    int t; cin >> t;
    cin.ignore(); 
    while(t--) {
        string str;
        getline(cin, str); 
        stack<char> s;
        int i;
        for (i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            else if (!s.empty() && ((str[i] == ')' && s.top() == '(') ||
                                     (str[i] == ']' && s.top() == '['))) {
                s.pop();
            } else if (str[i] == ' ') {
                continue;
            } else {
                break;
            }
        }
        if (s.empty() && i == str.size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
