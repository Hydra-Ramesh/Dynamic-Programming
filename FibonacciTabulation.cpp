#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n; // Base cases: F(0) = 0, F(1) = 1

    // Create a vector to store Fibonacci numbers
    vector<long long> fib(n + 1);

    // Initialize the base cases
    fib[0] = 0;
    fib[1] = 1;

    // Compute Fibonacci numbers iteratively (bottom-up approach)
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
