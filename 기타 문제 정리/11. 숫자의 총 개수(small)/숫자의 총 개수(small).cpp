/*
* �ڿ��� N�� �ԷµǸ� 1���� N����
* �� ���ڰ� �� �� ���Ǿ����� ���ϱ�
*/

#include <iostream>
using namespace std;

void main() {
	int num;
	cin >> num;

	int count = 0;

	for (int i = 1; i <= num; i++) {
		if (i < 10)
			count++;
		else if (i >= 10 && i < 100)
			count += 2;
		else if (i >= 100 && i < 1000)
			count += 3;
		else if (i >= 1000 && i < 10000)
			count += 4;
		else if (i >= 10000 && i < 100000)
			count += 5;
	}

	cout << count;
}