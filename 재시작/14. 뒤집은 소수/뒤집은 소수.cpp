/*
* N개의 자연수를 입력 받고 각 자연수를 뒤집는다
* 뒤집은 수가 소수이면 그 수를 출력
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