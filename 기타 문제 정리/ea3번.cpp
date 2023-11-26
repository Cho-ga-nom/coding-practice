//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool visit[51][51] = { false, };
//int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//int width, height, length;
//
//void Dfs(int x, int y, vector<vector<int>>& maps) {
//	visit[x][y] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int dx = x + dir[i][0];
//		int dy = y + dir[i][1];
//
//		if (dx < 0 || dy < 0 || dx >= height || dy >= width) {
//			length++;
//			continue;
//		}
//
//		if (maps[dx][dy] == 0) {
//			length++;
//			continue;
//		}
//
//		if (visit[dx][dy])
//			continue;
//
//		Dfs(dx, dy, maps);
//	}
//}
//
//int main() {
//	int answer = -1;
//	vector<vector<int>> maps = { {0, 0, 1, 0, 0}, {0, 1, 1, 0, 1}, {0, 0, 1, 0, 1 }, { 1, 1, 1, 0, 1 } };
//	width = maps[0].size();
//	height = maps.size();
//
//	vector<int> lands;
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++) {
//			if (maps[i][j] == 1 && !visit[i][j]) {
//				length = 0; 
//				Dfs(i, j, maps);
//				cout << length << "\n";
//				lands.push_back(length);
//			}
//		}
//	}
//
//	if (lands.size() == 0)
//		answer = 0;
//	else {
//		sort(lands.begin(), lands.end());
//		answer = lands.back();
//	}
//
//	cout << answer;
//
//	return 0;
//}