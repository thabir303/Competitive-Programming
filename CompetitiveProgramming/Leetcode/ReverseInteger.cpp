#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        const int MAX_INT = 2147483647;
        const int MIN_INT = -2147483648;

        long long int ans = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (ans > MAX_INT / 10 || (ans == MAX_INT / 10 && digit > 7)) {
                return 0;
            }
            if (ans < MIN_INT / 10 || (ans == MIN_INT / 10 && digit < -8)) {
                return 0;
            }

            ans = ans * 10 + digit;
        }

        return static_cast<int>(ans);
    }
};

int main() {
    Solution solution;
    int x;
    cin >> x;
    cout << solution.reverse(x) << endl;
    return 0;
}
