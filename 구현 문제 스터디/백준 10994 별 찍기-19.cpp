/*
 * 백준 실버4 구현 문제
 * 별 찍기-19
 */

#include <iostream>
using namespace std;

char map[500][500];

void DrawStar(int n, int x, int y)
{
    if (n == 1)
    {
        map[x][y] = '*';
        return;
    }

    int len = 4 * (n - 1) + 1;

    // 위, 아래 가로선
    for (int j = y; j < y + len; j++)
    {
        map[x][j] = '*';
        map[x + len - 1][j] = '*';
    }

    // 좌, 우 세로선
    for (int i = x; i < x + len; i++)
    {
        map[i][y] = '*';
        map[i][y + len - 1] = '*';
    }

    // n을 줄여가면 재귀적으로 수행
    DrawStar(n - 1, x + 2, y + 2);
    return;
}

int main(void)
{

    int n;
    cin >> n;

    // 공백으로 초기화
    for (int i = 0; i < 4 * (n - 1) + 1; i++)
    {
        for (int j = 0; j < 4 * (n - 1) + 1; j++)
        {
            map[i][j] = ' ';
        }
    }

    DrawStar(n, 0, 0);

    // 출력
    for (int i = 0; i < 4 * (n - 1) + 1; i++)
    {
        for (int j = 0; j < 4 * (n - 1) + 1; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    return 0;
}