#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> red(n+1, false);

    for (int i = 0; i < q; i++) {
        int type, v;
        cin >> type >> v;

        if (type == 1) {
            red[v] = true;
        } else if (type == 2) {
            if (red[v]) {
                cout << 0 << endl;
                continue;
            }

            vector<int> dist(n+1, -1);
            queue<int> bfs;
            dist[v] = 0;
            bfs.push(v);
            int ans = -1;

            while (!bfs.empty()) {
                int u = bfs.front(); bfs.pop();
                for (int i = 0; i < adj[u].size(); i++) {
                    int to = adj[u][i];
                    if (dist[to] == -1) {
                        dist[to] = dist[u] + 1;
                        if (red[to]) {
                            ans = dist[to];
                            bfs = queue<int>(); 
                            break;
                        }
                        bfs.push(to);
                    }
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}
