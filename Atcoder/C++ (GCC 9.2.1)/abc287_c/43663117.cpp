#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    if (m != n - 1) {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        if (graph[i].size() > 2) {
            cout << "No\n";
            return 0;
        }
    }
    vector<bool> reach(n);
    queue<int> que;
    reach[0] = true;
    que.push(0);
    while (not que.empty()) {
        const int u = que.front();
        que.pop();
        for (const int v : graph[u]) {
            if (not reach[v]) {
                reach[v] = true;
                que.push(v);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (!reach[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
