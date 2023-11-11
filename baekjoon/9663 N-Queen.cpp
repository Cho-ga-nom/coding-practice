#include <iostream>
using namespace std;

int N, map[16];
int ans = 0;

bool Attackable(int r1, int c1, int r2, int c2) {
	if (c1 == c2) return true;
	else if (r1 - c1 == r2 - c2) return true;
	else if (r1 + c1 == r2 + c2) return true;
	else return false;
}

bool Check() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (Attackable(i, map[i], j, map[j])) {
				return false;
			}
		}
	}

	return true;
}

void Recursive(int row) {
	if (row == N) {       // 마지막 행까지 돌았으면 공격할 수 없는지 검사
		ans++;
	}
	else {
		for (int cand = 0; cand < N; cand++) {
			bool possible = true;
			for (int i = 0; i < row; i++) {
				if (Attackable(row, cand, i, map[i])) {
					possible = false;
					break;
				}
			}
			
			if (possible) {
				map[row] = cand;
				Recursive(row + 1);
				map[row] = 0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	Recursive(0);
	cout << ans;

	return 0;
}