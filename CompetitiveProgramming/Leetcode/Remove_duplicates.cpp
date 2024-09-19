#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> nums; // You can use a more descriptive name for your vector
    vector<int> n;

    int s; 
    cin >> s;

    for(int i = 0; i < s; i++)
    { 
        int x;
        cin >> x;
        n.push_back(x);
    }
    // vector<int>::iterator m=max_element(n.begin(),n.end());
    // cout<<*m<<endl;

    // int size=max_element(n.begin(),n.end())-n.begin();
    // cout<<size<<endl;

    sort(n.begin(), n.end());

    // Use the unique algorithm to remove duplicates
    n.erase(unique(n.begin(), n.end()), n.end());

    

    for(auto it: n)
        cout << it << " ";

    return 0;
}
