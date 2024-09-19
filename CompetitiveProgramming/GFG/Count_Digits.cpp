//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {

        int a = N;
        int cnt = 0;
        while (N != 0)
        {
            int digit = N % 10;
            N /= 10;
            if (digit != 0)
            {
                if (a % digit == 0)
                    cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends