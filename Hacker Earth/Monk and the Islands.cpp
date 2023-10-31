#include <bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)

int main() {
  short t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    queue<int> q;
    int visited[n + 1] = {0}, distance[n + 1] = {0};

    for (int i = 1; i <= m; i++) {
      int x, y;
      cin >> x >> y;
      adj[x].pb(y);
      adj[y].pb(x);
    }

    visited[1] = 1;
    distance[1] = 0;
    q.push(1);

    while (!q.empty()) {
      int node = q.front();
      q.pop();
      for (auto child : adj[node]) {
        if (visited[child]) {
          continue;
        }
        distance[child] = distance[node] + 1;
        visited[child] = 1;
        q.push(child);
      }
    }
    cout << distance[n] << '\n';
  }
}
