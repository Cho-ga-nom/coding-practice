/*
* 백준 골드5 구현 문제
* 배열 돌리기 2
*/

#include <iostream>
using namespace std;
int map[301][301];
int N, M, R;

int dr[4] = { 0,1,0,-1 };
int dc[4] = { 1,0,-1,0 };

void rotate(int start, int len) {
    int r = R % len;

    for (int i = 0; i < r; i++) {
        int startVal = map[start][start];
        int r = start;
        int c = start;

        int k = 0;
        while (k < 4) {
            int nr = r + dr[k]; 
            int nc = c + dc[k];

            if (nr == start && nc == start)
                break;

            if (start <= nr && nr < N - start && start <= nc && nc < M - start) {
                map[r][c] = map[nr][nc];
                r = nr;
                c = nc;
            }
            else
                k++;
        }
        map[start + 1][start] = startVal; 
    }
}


int main() {
    cin >> N >> M >> R;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cin >> map[i][j];
    }

    int cnt = min(N, M) / 2;
    int n = N, m = M;
    for (int i = 0; i < cnt; i++) {
        rotate(i, 2 * n + 2 * m - 4);
        n -= 2;
        m -= 2;

    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << map[i][j] << " ";
        cout << "\n";
    }

    return 0;
}