#include <iostream>

using namespace std;

long long countIntegersDivisibleByX(long long a, long long b, long long x) {
    // Function to calculate f(n) for n >= 0
    auto f = [](long long n, long long x) {
        return n / x + 1;
    };

    // Handling special case for a = 0
    if (a == 0) {
        return f(b, x);
    } else {
        return f(b, x) - f(a - 1, x);
    }
}

int main() {
    long long a, b, x;
    // cout << "Enter the values of a, b, and x (separated by spaces): ";
    cin >> a >> b >> x;

    long long result = countIntegersDivisibleByX(a, b, x);
    // cout << "Number of integers divisible by " << x << " between " << a << " and " << b << " (inclusive): " << result << endl;
    cout<<result;

    return 0;
}
