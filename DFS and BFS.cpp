#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int> adj[N];
bool visited[N];
queue<int> q;
// int distance[N];

void dfs(int u) {
	if (visited[u]) return;
	visited[u] = true;
	cout << u << " ";
	for (auto v : adj[u])
		dfs(v);
}

void bfs(int x) {
	visited[x] = true;
	// distance[x] = 0;
	q.push(x);
	while (!q.empty()) {
		int s = q.front(); q.pop();
		for (auto u : adj[s]) {
			if (visited[u]) continue;
			visited[u] = true;
			// distance[u] = distance[s] + 1;
			q.push(u);
		}
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1); 
	bfs(3);
}
