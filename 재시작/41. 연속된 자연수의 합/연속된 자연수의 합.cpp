/*
 * 자연수 n이 입력되었을 때
 * 1부터 n-1까지 연속된 2개 이상의 자연수의 합으로 n을 표현
 * 자연수의 합으로 표현할 수 있는 가짓수와 합을 출력
 *
 * 15를 입력받은 경우
 *
 * 7+8 = 15
 * 4+5+6 = 15
 * 1+2+3+4+5 = 15
 * 총 3가지
 */

#include <iostream>
using namespace std;

int printNum(int num, int count, int n)
{
	int i = num - count;
	cout << i;
	i++;

	while (i <= num)
	{
		cout << " + " << i;
		i++;
	}

	cout << " = " << n << "\n";
	return 1;
}

int main()
{
	int n, i, j, res;
	cin >> n;

	int sum = 0;
	int count = 0;
	res = 0;

	for (i = 1; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			sum += j;
			count++;

			if (sum == n)
			{
				res += printNum(j, count - 1, n);
				break;
			}
		}

		sum = 0;
		count = 0;
	}

	cout << res;
}