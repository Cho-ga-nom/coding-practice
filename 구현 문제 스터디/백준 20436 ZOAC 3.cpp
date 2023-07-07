/*
 * 백준 실버4 구현 문제
 * ZOAC 3
 */
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

char keyBoard[3][10] = {
		{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
		{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
		{'z', 'x', 'c', 'v', 'b', 'n', 'm'}};

int main(void)
{
	char sl, sr; // 처음 위치
	string str;	 // 문자열
	cin >> sl >> sr;
	cin >> str;

	int time = 0;
	int x1, y1, x2, y2; // 왼쪽, 오른쪽 좌표

	// 처음 위치 저장
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (keyBoard[i][j] == sl)
			{
				x1 = i;
				y1 = j;
			}
			else if (keyBoard[i][j] == sr)
			{
				x2 = i;
				y2 = j;
			}
		}
	}

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (j < 2 && k < 5 || j == 2 && k < 4)
				{ // 왼쪽 문자 검사
					if (keyBoard[j][k] == str[i])
					{
						time += abs(x1 - j);
						time += abs(y1 - k);
						time++;
						x1 = j;
						y1 = k;
					}
				}
				else
				{
					if (keyBoard[j][k] == str[i])
					{ // 오른쪽 문자 검사
						time += abs(x2 - j);
						time += abs(y2 - k);
						time++;
						x2 = j;
						y2 = k;
					}
				}
			}
		}
	}

	cout << time;
}