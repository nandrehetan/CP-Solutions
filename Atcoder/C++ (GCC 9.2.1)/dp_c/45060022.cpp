#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 100009;
ll n;
ll arr[4][MAXN]; // Changed from [6][100009] to [4][MAXN]
ll dp[4][MAXN];  // Changed from [6][100009] to [4][MAXN]

ll recur(ll ind, ll prev) {
    if (ind == n) {
        return 0;
    }

    if (dp[prev][ind] != -1) {
        return dp[prev][ind];
    }

    ll ans = 0;

    for (ll i = 1; i <= 3; i++) {
        if (i != prev) {
            ans = max(ans, arr[i][ind] + recur(ind + 1, i));
        }
    }

    return dp[prev][ind] = ans;
}

void solve() {
    cin >> n;
    for (ll i = 0; i < n; i++) {  // Changed the loop range
        for (ll j = 1; j <= 3; j++) {
            cin >> arr[j][i];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << recur(0, 0) << "\n"; // Changed the initial call
}

int main() {
    solve();
    return 0;
}
