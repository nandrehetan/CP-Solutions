#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> L(N);
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }

    vector<int> prefix_sum(N + 1, 0); // prefix sum array to store cumulative distances
    for (int i = 0; i < N; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + L[i];
    }

    int count = 0; // initializing count as 0

    for (int i = 0; i <= N; ++i) {
        if (prefix_sum[i] <= X) {
            count++; // incrementing count if the prefix sum is less than or equal to X
        }
    }

    cout << count << endl;

    return 0;
}
