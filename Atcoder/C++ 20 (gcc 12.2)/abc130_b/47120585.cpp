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

    int count = 1; // initializing count as 1 because the first bounce is always at coordinate 0

    int current_pos = 0; // initial position

    for (int i = 0; i < N; ++i) {
        current_pos += L[i]; // updating current position

        if (current_pos <= X) {
            count++; // incrementing count if the current position is less than or equal to X
        }
    }

    cout << count << endl;

    return 0;
}
