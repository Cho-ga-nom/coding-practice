/*
 * 백준 실버1 구현 문제
 * 배열 돌리기 1
 * */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[301][301];
	int temp[301][301];
	int n, m, r, i, j, rot;
	cin >> n >> m >> r;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cin >> arr[i][j];
	}

	while (r > 0)
	{
		for (rot = 0; rot < min(n, m) / 2; rot++)
		{ // 행과 열 중 더 긴 것에 따름
			int x1 = rot, y1 = rot, x2 = n - 1 - rot, y2 = m - 1 - rot;

			// 좌
			for (int i = y2 - 1; i >= y1; i--)
				temp[x1][i] = arr[x1][i + 1];
			// 하
			for (int i = x1 + 1; i <= x2; i++)
				temp[i][y1] = arr[i - 1][y1];
			// 우
			for (int i = y1 + 1; i <= y2; i++)
				temp[x2][i] = arr[x2][i - 1];
			// 상
			for (int i = x2 - 1; i >= x1; i--)
				temp[i][y2] = arr[i + 1][y2];
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
				arr[i][j] = temp[i][j];
		}

		r--;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << arr[i][j] << ' ';

		cout << endl;
	}
}