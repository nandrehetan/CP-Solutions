#include <bits/stdc++.h>
using namespace std;
int main () {
  int T;
  cin >> T;
  while (T--) {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] += i+1;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int x: a) {
      if (c >= x) {
        c -= x;
        ans++;
      }
      else break;
    }
    cout << ans << '\n';
  }
}