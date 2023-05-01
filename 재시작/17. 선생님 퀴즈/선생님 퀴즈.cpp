/*
* n���� �л����� ���� ���ڰ� �ο�
* �л����� 1���� ������ �ο� ���� ���ڱ����� ���� ����
* �л����� ����� ����� �´��� �Ǻ�
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int stdNum;
	cin >> stdNum;

	int n;
	vector<int> ans(stdNum), temp(stdNum);

	for (int i = 0; i < stdNum; i++) {
		cin >> n >> ans[i];              // �� �л��� ���� �Է� ����

		for (int k = 1; k <= n; k++)      // 1���� �л��� �ο����� ���ڱ����� ���� ���ؼ� ����
			temp[i] += k;
	}

	for (int i = 0; i < stdNum; i++) {
		if (temp[i] == ans[i])          // �� ���� ������ ��
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}