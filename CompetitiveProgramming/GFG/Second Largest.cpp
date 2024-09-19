
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    int print2largest(vector<int> &arr) 
    {
        set<int>st;
        for(int i = 0;i<arr.size();i++)
            st.insert(arr[i]);
        
        if(st.size()==1) return -1;
        auto it = prev(st.end(),2);
        return *it; 
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends