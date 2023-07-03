/*
* 백준 실버4 구현 문제
* 지뢰 찾기
*/

#include <iostream>
using namespace std;

char mines[11][11];
char clicked[11][11];
char result[11][11];
int x[8] = { 0, 0, -1, 1, -1, -1, 1, 1 };   //상, 하, 좌, 우, 왼쪽 위, 왼쪽 아래, 오른쪽 위, 오른쪽 아래
int y[8] = { -1, 1, 0, 0, -1, 1, -1, 1 };

int main() {
	int n, i, j;
	bool isFail = false;
	int count = 0;
	cin >> n;

	// 지뢰 분포 입력
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> mines[i][j];
			result[i][j] = '.';
		}
	}

	// 클릭한 위치 입력
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> clicked[i][j];

			// 지뢰가 있는 곳을 클릭한 경우
			if (clicked[i][j] == 'x' && mines[i][j] == '*') {
				isFail = true;
			}
			else if (clicked[i][j] == 'x' && mines[i][j] == '.') {
				for (int k = 0; k < 8; k++) {                        // 8가지 방향에 지뢰가 있는지 검사
					int tempX = i + x[k];
					int tempY = j + y[k];

					if (tempX >= 0 && tempX < n && tempY >= 0 && tempY < n) {   // 배열 크기를 넘지 않는 영역인지 검사
						if (mines[tempX][tempY] == '*')                        // 지뢰가 있다면 카운트 증가
							count++;
					}
				}

				result[i][j] = count + '0';
				count = 0;
			}
		}
	}

	if (isFail) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	else {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << result[i][j];
			}
			cout << endl;
		}
	}
}