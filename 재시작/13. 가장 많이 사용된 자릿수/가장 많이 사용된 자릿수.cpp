/*
* �Է¹��� �ڿ����� �ڸ��� �� ���� ���� ���� ���� ���
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main() {
	string num;
	cin >> num;

	vector<int> digitCount(10);    // ������ ���ڰ� ���� Ƚ���� ����
	int i = 0;
	int digit, max= 0;

	while (i < num.size()) {
		digit = num[i] - 48;
		digitCount[digit]++;      // �ݺ��ϸ鼭 ���� ������ ��� Ƚ�� ����
		i++;
	}

	for (int i = 1; i < digitCount.size(); i++) {    // ī��Ʈ�� ���Ͽ� ���� ���� ���� ���� Ž��
		if (digitCount[i] >= digitCount[max])
			max = i;
	}

	cout << max;
}