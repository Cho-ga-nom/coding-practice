/*
 * ���� ���5 ���� ����
 * �迭 ������ 2
 */

#include <iostream>
using namespace std;
int map[301][301];
int N, M, R;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void Rotate(int start, int oneLap)
{
    int r = R % oneLap;

    for (int i = 0; i < r; i++)
    {
        int startVal = map[start][start];
        int x = start;
        int y = start;

        int j = 0;
        while (j < 4)
        {
            int tempX = x + dx[j];
            int tempY = y + dy[j];

            if (tempX == start && tempY == start)
                break;

            if (start <= tempX && tempX < N - start && start <= tempY && tempY < M - start)
            {
                map[x][y] = map[tempX][tempY];
                x = tempX;
                y = tempY;
            }
            else
                j++;
        }
        map[start + 1][start] = startVal;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> R;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> map[i][j];
    }

    int count = min(N, m) / 2;
    int tempN = N, tempM = M;
    for (int i = 0; i < count; i++)
    {
        Rotate(i, 2 * tempN + 2 * tempM - 4);
        tempN -= 2;
        tempM -= 2;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << map[i][j] << " ";
        cout << "\n";
    }

    return 0;
}