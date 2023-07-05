/*
 * 백준 실버4 구현 문제
 * 지뢰 찾기
 */

#include <iostream>
using namespace std;

int N;
char map[11][11];
char inp[11][11];
char out[11][11];
int dx[8] = {0, 0, -1, 1, -1, -1, 1, 1}; // 상, 하, 좌, 우, 왼쪽 위, 왼쪽 아래, 오른쪽 위, 오른쪽 아래
int dy[8] = {-1, 1, 0, 0, -1, 1, -1, 1};

int func(int x, int y, int cnt)
{
	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < N && ny >= 0 && ny < N)
			if (map[nx][ny] == '*')
				cnt++;
	}
	return cnt;
}

int main()
{
	bool isFailed = false; // 지뢰를 밟았는지 안밟았는지 확인
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			cin >> map[i][k];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			cin >> inp[i][k];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			if (inp[i][k] == 'x')
			{
				int cnt = func(i, k, 0);
				out[i][k] = cnt + '0';
				if (map[i][k] == '*')
					isFailed = true; // 지뢰를 밟음.
			}
			else if (inp[i][k] == '.')
				out[i][k] = '.';
		}
	}

	if (isFailed)
	{
		for (int i = 0; i < N; i++)
		{
			for (int k = 0; k < N; k++)
			{
				if (map[i][k] == '*')
					out[i][k] = '*';
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			cout << out[i][k];
		}
		cout << '\n';
	}
}