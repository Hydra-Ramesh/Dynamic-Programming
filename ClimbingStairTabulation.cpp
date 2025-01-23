#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1; // Base cases: 1 way to climb 0 or 1 step.

        vector<int> dp(n + 1, 0); // Initialize dp array with size n+1.
        dp[0] = 1; // 1 way to climb 0 steps.
        dp[1] = 1; // 1 way to climb 1 step.

        // Fill the dp array iteratively.
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n]; // Return the number of ways to climb n steps.
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
