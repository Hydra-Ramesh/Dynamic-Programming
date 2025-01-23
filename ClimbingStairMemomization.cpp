#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countWays(int n, vector<int>& dp) {
        if (n <= 1) return 1; // Base cases: 1 way to climb 0 or 1 steps.
        if (dp[n] != -1) return dp[n]; // Return the precomputed result if available.

        // Compute the result and store it in the memoization array.
        return dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1); // Initialize memoization array.
        return countWays(n, dp);
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
