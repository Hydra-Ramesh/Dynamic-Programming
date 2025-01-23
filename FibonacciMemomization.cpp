#include <iostream>
#include <vector>
using namespace std;

// Function to compute Fibonacci using top-down DP (Memoization)
int f(int n, vector<int> &dp) {
    if (n <= 1) return n; // Base cases: F(0) = 0, F(1) = 1
    if (dp[n] != -1) return dp[n]; // Return if already computed

    // Compute and store the result in dp[n]
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize a dp array of size (n+1) with -1
    vector<int> dp(n + 1, -1);

    // Compute and print Fibonacci of n
    cout << "Fibonacci(" << n << ") = " << f(n, dp) << endl;

    return 0;
}
