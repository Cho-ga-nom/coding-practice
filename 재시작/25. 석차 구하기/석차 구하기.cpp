/*
* N���� ���������� �ԷµǸ�
* �� �л��� ������ �Էµ� ������� ���
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n;
	cin >> n;
	vector<int> score(n), rank(n);

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		rank[i] = 1;                   // ������ �Է��� �� �⺻ ������ 1�� �ʱ�ȭ
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {    // ��� �л��� ���� ���Ͽ� ���� ����
			if (score[j] > score[i])
				rank[i]++;
		}
	}

	for (int i = 0; i < n; i++)
		cout << rank[i] << " ";
}