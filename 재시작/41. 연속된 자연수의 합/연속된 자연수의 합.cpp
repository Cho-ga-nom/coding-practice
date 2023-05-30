/*
 * ���ӵ� �ڿ����� ��
 *
 * ���� ���� N�� �ԷµǸ� 2�� �̻� ���ӵ� �ڿ����� ������
 * ���� N�� ǥ���ϴ� ����� �������� ���
 *
 * 15�� �Էµ� ���
 *
 * 7+8 = 15
 * 4+5+6 = 15
 * 1+2+3+4+5 = 15
 * �� 3����
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