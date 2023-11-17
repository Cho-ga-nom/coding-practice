#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> adj[1002];
int n, m, V;
int visit[1002], dist[1002];

void Dfs(int x) {
	cout << x << " ";
	visit[x] = 1;

	for (auto elem : adj[x]) {
		if (visit[elem])
			continue;

		Dfs(elem);
	}
}

void Bfs(int s) {
	for (int i = 1; i <= n; i++)
		visit[i] = dist[i] = 0;

	queue<int> que;
	que.push(s);
	visit[s] = 1, dist[s] = 0;

	while (!que.empty()) {
		int x = que.front();
		que.pop();
		cout << x << " ";

		for (auto elem : adj[x]) {
			if (visit[elem])
				continue;

			visit[elem] = 1;
			dist[elem] = dist[x] + 1;
			que.push(elem);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m >> V;
	for (int i = 0; i < m; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}

	for (int i = 1; i <= n; i++)
		sort(adj[i].begin(), adj[i].end());

	Dfs(V);
	cout << "\n";
	Bfs(V);

	return 0;
}