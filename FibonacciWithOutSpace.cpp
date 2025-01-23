#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n; // Base cases: F(0) = 0, F(1) = 1

    // Variables to store the last two Fibonacci numbers
    long long prev1 = 0, prev2 = 1;

    // Compute Fibonacci iteratively
    for (int i = 2; i <= n; i++) {
        long long current = prev1 + prev2; // Current Fibonacci number
        prev1 = prev2;                    // Shift prev1 to prev2
        prev2 = current;                  // Shift prev2 to current
    }

    return prev2;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
