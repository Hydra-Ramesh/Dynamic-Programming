#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1; // Base case: 1 way to climb 0 or 1 steps.

        int prev2 = 1; // dp[0]
        int prev1 = 1; // dp[1]

        // Compute the result using only two variables
        for (int i = 2; i <= n; i++) {
            int current = prev1 + prev2; // current dp[i] = dp[i-1] + dp[i-2]
            prev2 = prev1;  // Move prev2 to prev1
            prev1 = current; // Move prev1 to current
        }

        return prev1; // The result is stored in prev1
    }
};

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    Solution solution;
    int result = solution.climbStairs(n);
    cout << "Number of ways to climb " << n << " steps: " << result << endl;

    return 0;
}
