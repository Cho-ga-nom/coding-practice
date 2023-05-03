/*
* �µ� ���� �Ⱓ�� �� ��¥�� �µ�, �������� ��ĥ�� �Է� �Ǿ��� ��
* �Է� ���� �������� �Ⱓ ���� �µ��� ���� �ִ밡 �Ǵ� �� ���
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, k, max, temp = 0;
	cin >> n >> k;             // ��ü �Ⱓ, �������� �Ⱓ �Է�
	vector<int> deg(n);

	for (int i = 0; i < n; i++)
		cin >> deg[i];             // �� ���� �µ� �Է�

	for (int i = 0; i + k <= n; i++) {   // ���� ��¥���� �������� �Ⱓ�� ���� ���� ��ü �Ⱓ�� ���� ���� ������ �ݺ�
		for (int j = 0; j < k; j++) {    // ���� �ε������� �������� �Ⱓ ������ �µ����� ����
			temp += deg[i + j];
		}

		if (i == 0)
			max = temp;

		if (temp > max)      // �ִ밪�� ��
			max = temp;

		temp = 0;
	}

	cout << max;
}