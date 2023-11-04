#include <bits/stdc++.h>
using namespace std;

#define int long long

const int INF = LLONG_MAX >> 1;

int N;
int a[100023][3]; // Changed [6] to [3]
int dp[100023][3]; // Changed [6] to [3]

int solve(int ind, int prev) {
    if (ind == N) 
        return 0;

    if (dp[ind][prev] != 0) 
        return dp[ind][prev];

    int maxi = 0;
    for (int i = 0; i < 3; i++) {
        if (i != prev) {
            maxi = max(maxi, a[ind][i] + solve(ind + 1, i));
        }
    }

    return dp[ind][prev] = maxi;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int m = 0; m < N; m++) {
        for (int n = 0; n < 3; n++)
            cin >> a[m][n];
    }

    memset(dp, 0, sizeof dp);
    cout << solve(0, -1);
    return 0; // Added a return statement
}
