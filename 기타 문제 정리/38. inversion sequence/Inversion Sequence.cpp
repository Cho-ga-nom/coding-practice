/*
* Inversion Sequence
* 1���� n������ ���� �� ������ ����Ͽ� �̷���� ������ ���� ��
* 1���� n���� ������ �� �տ� ���� �ִ� �ڽź��� ū ������ ������
* ������ ǥ���� ���� Inversion Sequence
* 
* ������ ���� ������ ���� ��
* 4 8 6 2 5 1 3 7
* 1 �տ� ���� 1���� ū ���� 2, 8, 6, 2, 5 �̷��� 5��
* 2 �տ� ���� 2���� ū ���� 4, 8, 6 �̷��� 3���̴�.
* ���� Inversion Sequence�� 5 3 4 0 ... �� �ȴ�.
* 
* Inversion Sequence�� �־����� ��
* ���� ������ ���
*/

#include <iostream>
using namespace std;

int main() {
	int n, i, j, pos;
	cin >> n;

	int* inversion = new int[n + 1];
	int* result = new int[n + 1];

	for (i = 1; i <= n; i++)
		cin >> inversion[i];

	for (i = n; i >= 1; i--) {
		pos = i;
		for (j = 1; j <= inversion[i]; j++) {
			result[pos] = result[pos + 1];
			pos++;
		}
		result[pos] = i;
	}

	for (i = 1; i <= n; i++)
		cout << result[i] << " ";

	delete[] inversion;
}