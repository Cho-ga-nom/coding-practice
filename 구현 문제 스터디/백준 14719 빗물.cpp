/*
 * 백준 골드5 구현 문제
 * 빗물
 */

#include <iostream>
using namespace std;

int arr[500];

int main()
{
	int w, h, left, right, stand;
	int sum = 0;
	cin >> h >> w;

	for (int i = 0; i < w; i++)
		cin >> arr[i];

	for (int i = 1; i < w - 1; i++)
	{
		left = 0, right = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] > left)
				left = arr[j];
		}

		for (int j = w - 1; j > i; j--)
		{
			if (arr[j] > right)
				right = arr[j];
		}

		if (left > right)
			stand = right;
		else
			stand = left;

		if (stand - arr[i] > 0)
			sum += stand - arr[i];
	}

	cout << sum;
}