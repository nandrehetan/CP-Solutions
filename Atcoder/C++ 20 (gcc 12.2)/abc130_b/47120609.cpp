#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(m);
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    std::vector<int> now_sc(n);
    for (int i = 0; i < n; i++) {
        now_sc[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'o') {
                now_sc[i] += a[j];
            }
        }
    }
    int mx = *std::max_element(now_sc.begin(), now_sc.end());
    for (int i = 0; i < n; i++) {
        std::vector<int> remain;
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'x') {
                remain.push_back(a[j]);
            }
        }
        std::sort(remain.rbegin(), remain.rend());
        int ans = 0;
        while (now_sc[i] < mx) {
            now_sc[i] += remain[ans++];
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
