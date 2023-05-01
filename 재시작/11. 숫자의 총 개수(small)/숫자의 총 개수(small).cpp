/*
* 자연수 N이 입력되면 1부터 N까지
* 각 숫자가 몇 개 사용되었는지 구하기
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