/*
* N! ������ ���� �ڸ����� ���������� 0�� �� �� �ִ��� ���ϱ�
*/

#include <iostream>
using namespace std;

void main() {
	int n, temp, j, count1 = 0, count2 = 0;
	cin >> n;
	
	for (int i = 2; i <= n; i++) {     // ���丮���� �̷�� �� 2 ~ n�� ���� ������ �� 0�� ���� �� �ִ� ������ �˻�
		temp = i;
		j = 2;

		while (1) {
			if (temp % j == 0) {
				if (j == 2)          // 2�� 5�� ������ �������� ������ �˻�
					count1++;
				else if (j == 5)
					count2++;
				temp /= j;
			}
			else
				j++;

			if (temp == 1) break;
		}
	}

	if (count1 < count2)
		cout << count1;
	else
		cout << count2;
}