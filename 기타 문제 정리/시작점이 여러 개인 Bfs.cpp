//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//// 모든 시작점을 큐에 넣고 탐색 시작
//
//int N, M, B, A[10][10], blank[100][2], answer;
//bool visit[10][10];
//int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//
//void Bfs() {
//	queue<int> que;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			visit[i][j] = false;
//
//			if (A[i][j] == 2) {
//				que.push(i);
//				que.push(j);
//				visit[i][j] = true;
//			}
//		}
//	}
//
//	while (!que.empty()) {
//		int x = que.front(); que.pop();
//		int y = que.front(); que.pop();
//
//		for (int k = 0; k < 4; k++) {
//			int dx = x + dir[k][0];
//			int dy = y + dir[k][1];
//
//			if (dx < 0 || dy < 0 || dx >= N || dy >= M)
//				continue;
//
//			if (A[dx][dy] != 0)
//				continue;
//
//			if (visit[dx][dy])
//				continue;
//
//			visit[dx][dy] = true;
//			que.push(dx);
//			que.push(dy);
//		}
//	}
//
//	int count = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			if (A[i][j] == 0 && !visit[i][j])
//				count++;
//	}
//
//	answer = max(answer, count);
//}
//
//void Dfs(int idx, int selectedCount) {
//	if (selectedCount == 3) {
//		Bfs();
//		return;
//	}
//
//	if (idx > B) return;
//
//	A[blank[idx][0]][blank[idx][1]] = 1;
//	Dfs(idx + 1, selectedCount + 1);
//
//	A[blank[idx][0]][blank[idx][1]] = 0;
//	Dfs(idx + 1, selectedCount);
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			cin >> A[i][j];
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (A[i][j] == 0) {
//				B++;
//				blank[B][0] = i;
//				blank[B][1] = j;
//			}
//		}
//	}
//
//	Dfs(1, 0);
//	cout << answer;
//
//	return 0;
//}