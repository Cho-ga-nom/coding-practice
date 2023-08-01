/*
 * 백준 실버5 구현 문제
 * 왕복
 */

#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	long long k;
	cin >> n >> k;

	int *input = new int[n];
	int *course = new int[n];
	cin >> input[0];
	course[0] = input[0];

	for (int i = 1; i < n; i++)
	{
		cin >> input[i];
		course[i] = input[i] + course[i - 1];
	}

	if (k < course[n - 1])
	{
		for (int i = 0; i < n; i++)
		{
			if (k < course[i])
			{
				cout << i + 1;
				break;
			}
			else
				continue;
		}
	}
	else
	{
		for (int i = n - 1; i >= 0; i--)
		{
			sum += input[i];
			if (k - course[n - 1] < sum)
			{
				cout << i + 1;
				break;
			}
		}
	}

	delete[] input, course;
	return 0;
}