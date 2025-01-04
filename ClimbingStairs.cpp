#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countWays(int n, vector<int>& dp) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n]; // Return the stored value if already computed
        }
        return dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return countWays(n, dp);
    }
};

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    Solution solution;
    int ways = solution.climbStairs(n);

    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;
    return 0;
}
