/*
* n���� ���ڰ� ������ ���� �Է�
* ��ü ���� �� ���� ���̰� �� �κ� ���� ������ ���� ���
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, maxLen = 0, temp = 0;
	cin >> n;
	vector<int> seq(n + 1);
	for (int i = 0; i < n; i++)
		cin >> seq[i];

	for (int i = 0; i < n; i++) {
		if (seq[i + 1] >= seq[i])      // ���� �ε����� ���� ���纸�� ũ�� ���� ����
			temp++;                    // ���� ����
		else {                        // �������� ������ ���� ������ ����
			if (temp > maxLen) {        // �ִ� ���̿� ��
				maxLen = temp + 1;
				temp = 0;              // ���� �ʱ�ȭ
			}
			else
				temp = 0;
		}
	}

	cout << maxLen;
}