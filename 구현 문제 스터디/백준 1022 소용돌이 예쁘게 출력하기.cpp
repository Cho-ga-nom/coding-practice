/*
* 백준 골드3 구현 문제
* 소용돌이 예쁘게 출력하기
*/

#include <iostream>
using namespace std;

int arr[50][5] = { 0, };
int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int r1, r2, c1, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	int len = 1;
	int num = 1;

	int x = 0, y = 0;
	
	if (r1 <= x && x <= r2 && c1 <= y && y <= c2)
		arr[x - r1][y - c1] = num;
	num++;

	int curLen = 0;
	int dir = 0;

	while (arr[0][0] == 0 || arr[r2 - r1][0] == 0 ||
		arr[r2 - r1][c2 - c1] == 0 || arr[0][c2 - c1] == 0) {
		x += dx[dir], y += dy[dir];

		if (r1 <= x && x <= r2 && c1 <= y && y <= c2)
			arr[x - r1][y - c1] = num;

		num++;
		curLen++;

		if (curLen == len) {
			curLen = 0;
			dir++;
			dir %= 4;

			if (dir == 0 || dir == 2)
				len++;
		}
	}

	int space = 0;
	while (num != 0) {
		num /= 10;
		space++;
	}

	for (int i = 0; i <= r2 - r1; i++) {
		for (int j = 0; j <= c2 - c1; j++)
			printf("%*d ", space, arr[i][j]);
		printf("\n");
	}

	return 0;
}