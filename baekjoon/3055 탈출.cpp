#include <iostream>
#include <queue>
using namespace std;

int R, C;
int visit[51][51], distWater[51][51], distHog[51][51];
char map[51][51];
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

void BfsWater() {
	queue<int> que;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			distWater[i][j] = -1;
			visit[i][j] = 0;

			if (map[i][j] == '*') {
				que.push(i);
				que.push(j);
				distWater[i][j] = 0;
				visit[i][j] = 1;
			}
		}
	}

	while (!que.empty()) {
		int x = que.front(); que.pop();
		int y = que.front(); que.pop();

		for (int i = 0; i < 4; i++) {
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];

			if (dx < 0 || dy < 0 || dx >= R || dy >= C)
				continue;

			if (map[dx][dy] != '.')
				continue;

			if (visit[dx][dy])
				continue;

			que.push(dx);
			que.push(dy);
			visit[dx][dy] = 1;
			distWater[dx][dy] = distWater[x][y] + 1;
		}
	}
}

void BfsHog() {
	queue<int> que;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			distHog[i][j] = -1;
			visit[i][j] = 0;

			if (map[i][j] == 'S') {
				que.push(i);
				que.push(j);
				distHog[i][j] = 0;
				visit[i][j] = 1;
			}
		}
	}

	while (!que.empty()) {
		int x = que.front(); que.pop();
		int y = que.front(); que.pop();

		for (int i = 0; i < 4; i++) {
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];

			if (dx < 0 || dy < 0 || dx >= R || dy >= C)
				continue;

			if (map[dx][dy] != '.' && map[dx][dy] != 'D')
				continue;

			// 물에 잠기지 않는지 검사
			if (distWater[dx][dy] != -1 && distWater[dx][dy] <= distHog[x][y] + 1)
				continue;

			if (visit[dx][dy])
				continue;

			que.push(dx);
			que.push(dy);
			visit[dx][dy] = 1;
			distHog[dx][dy] = distHog[x][y] + 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
			cin >> map[i][j];
	}

	// 특정 위치가 물에 잠길 때까지 걸리는 시간을 구해야 함
	// 물의 시작 위치에서 시작하는 Bfs 수행
	// 그 다음 고슴도치가 움직이는 Bfs 수행

	BfsWater();
	BfsHog();

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (map[i][j] == 'D') {
				if (distHog[i][j] == -1)
					cout << "KAKTUS";
				else
					cout << distHog[i][j];
			}
		}
	}

	return 0;
}