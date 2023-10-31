#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

int max_bandwidth(int n, int s, int t, int e, vector<vector<pair<int, int>>& connections) {
    vector<vector<int>> graph(n, vector<int>(n, 0));

    for (int i = 0; i < e; i++) {
        int u, v, bandwidth;
        cin >> u >> v >> bandwidth;
        u--; v--;
        graph[u][v] += bandwidth;
        graph[v][u] += bandwidth;
    }

    vector<int> parent(n);

    auto bfs = [&]() {
        fill(parent.begin(), parent.end(), -1);
        parent[s] = s;
        queue<pair<int, int>> q;
        q.push({s, INF});
        while (!q.empty()) {
            int u = q.front().first;
            int flow = q.front().second;
            q.pop();
            for (int v = 0; v < n; v++) {
                if (parent[v] == -1 && graph[u][v] > 0) {
                    int new_flow = min(flow, graph[u][v]);
                    if (v == t) {
                        return new_flow;
                    }
                    q.push({v, new_flow});
                    parent[v] = u;
                }
            }
        }
        return 0;
    };

    int max_flow = 0;
    int new_flow;
    while (new_flow = bfs()) {
        max_flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            graph[prev][cur] -= new_flow;
            graph[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return max_flow;
}

int main() {
    int n, s, t, e;
    cin >> n;
    cin >> s >> t >> e;
    vector<vector<pair<int, int>> connections(e);

    for (int i = 0; i < e; i++) {
        int u, v, bandwidth;
        cin >> u >> v >> bandwidth;
        connections[i] = {u, v, bandwidth};
    }

    int result = max_bandwidth(n, s - 1, t - 1, e, connections);
    cout << "The bandwidth is " << result << endl;
    
    return 0;
}

