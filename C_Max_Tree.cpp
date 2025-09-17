#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n+1);
        vector<int> indeg(n+1, 0);

        
        for (int i = 0; i < n-1; ++i) {
            int u, v;
            long long x, y;
            cin >> u >> v >> x >> y;
            if (x > y) {
                
                adj[u].push_back(v);
                indeg[v]++;
            } else if (y > x) {
                
                adj[v].push_back(u);
                indeg[u]++;
            } else {
               
                adj[u].push_back(v);
                indeg[v]++;
            }
        }

        
        queue<int> q;
        for (int i = 1; i <= n; ++i) if (indeg[i] == 0) q.push(i);
        vector<int> topo;
        topo.reserve(n);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            topo.push_back(u);
            for (int v : adj[u]) {
                if (--indeg[v] == 0) q.push(v);
            }
        }

        vector<int> p(n+1, 0);
        int cur = n;
        for (int node : topo) {
            p[node] = cur--;
        }

        for (int i = 1; i <= n; ++i) {
            cout << p[i] << (i==n ? '\n' : ' ');
        }
    }
    return 0;
}
