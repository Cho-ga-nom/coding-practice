/*
* N! 값에서 일의 자리부터 연속적으로 0이 몇 개 있는지 구하기
*/

#include <iostream>
using namespace std;

void main() {
	int n, temp, j, count1 = 0, count2 = 0;
	cin >> n;
	
	for (int i = 2; i <= n; i++) {     // 팩토리얼을 이루는 수 2 ~ n이 서로 곱했을 때 0이 나올 수 있는 수인지 검사
		temp = i;
		j = 2;

		while (1) {
			if (temp % j == 0) {
				if (j == 2)          // 2나 5로 나누어 떨어지는 수인지 검사
					count1++;
				else if (j == 5)
					count2++;
				temp /= j;
			}
			else
				j++;

			if (temp == 1) break;
		}
	}

	if (count1 < count2)
		cout << count1;
	else
		cout << count2;
}