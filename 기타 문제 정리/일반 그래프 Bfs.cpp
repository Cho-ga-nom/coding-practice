//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> adj[101];
//bool visit[101];
//int answer = 0;
//
//void Bfs(int x) {
//	queue<int> que;
//	que.push(x);
//	visit[x] = true;
//
//	while (!que.empty()) {
//		int num = que.front();
//		que.pop();
//
//		for (auto elem: adj[num]) {
//			if (visit[elem])
//				continue;
//
//			visit[elem] = true;
//			que.push(elem);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	int comp, link;
//	cin >> comp >> link;
//	for (int i = 0; i < link; i++) {
//		int v1, v2;
//		cin >> v1 >> v2;
//		adj[v1].push_back(v2);
//		adj[v2].push_back(v1);
//	}
//
//	for (int i = 1; i <= comp; i++) visit[i] = false;
//	Bfs(1);
//	for (int i = 2; i <= comp; i++) {
//		if (visit[i])
//			answer++;
//	}
//
//	cout << answer;
//
//	return 0;
//}