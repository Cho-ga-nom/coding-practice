//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, group_cnt;
//char a[30][30];
//bool visit[30][30];
//int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
//
//void dfs(int x, int y) {
//	group_cnt++;
//	visit[x][y] = true;
//
//	for (int k = 0; k < 4; k++) {
//		int nx = x + dir[k][0];
//		int ny = y + dir[k][1];
//		if (nx < 0 || ny < 0 || nx >= N || ny >= N) 
//			continue;  // 지도를 벗어나는 곳으로 가는가?
//
//		if (a[nx][ny] == '0') 
//			continue;  // 갈 수 있는 칸인지 확인해야 한다.
//
//		if (visit[nx][ny]) 
//			continue;  // 이미 방문한 적이 있는 곳인가?
//
//		dfs(nx, ny);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> a[i][j];
//		}
//	}
//
//	vector<int> groups;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (a[i][j] == '1' && !visit[i][j]) {
//				group_cnt = 0;
//				dfs(i, j);
//				groups.push_back(group_cnt);
//			}
//
//	if (groups.size() == 0) {
//		cout << "0";
//		return 0;
//	}
//
//	sort(groups.begin(), groups.end());
//	cout << groups.size() << '\n';
//	for (auto elem : groups) cout << elem << ' ';
//
//	return 0;
//}