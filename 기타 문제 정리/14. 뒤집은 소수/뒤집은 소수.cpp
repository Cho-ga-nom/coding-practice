/*
* N���� �ڿ����� �Է� �ް� �� �ڿ����� �����´�
* ������ ���� �Ҽ��̸� �� ���� ���
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int reverse(int x) {
	int res = 0;
	int temp;
	
	while (x > 0) {
			temp = x % 10;
			res = res * 10 + temp;
			x /= 10;
	}

	return res;
}

bool isPrime(int x) {
	if (x == 1)
		return false;
	
	for (int i = 2; i < x; i++) {
		if ((x % i) == 0)
			return false;
	}

	return true;
}

void main() {
	int num, n, temp;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> n;
		temp = reverse(n);

		if (isPrime(temp))
			cout << temp << " ";
	}
}