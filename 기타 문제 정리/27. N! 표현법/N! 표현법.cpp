/*
* N!이 주어졌을 때, 이를 소수의 곱으로 표현하라
* 5!은 120이므로
* 소수 2, 3, 5, 7... 순으로
* 3 1 1 => 2 3개, 3 1개, 5 1개를 곱한 결과이다.
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, temp, div;
	cin >> n;
	vector<int> prime(n);

	// 2부터 n까지 반복하면서
	// 팩토리얼을 이루는 각 숫자가 소수로 몇 번을 나눠야 나누어 떨어지는지 계산
	// 나눌 때마다 나눈 수의 카운트를 하나씩 증가
	for (int i = 2; i <= n; i++) {
		temp = i;
		div = 2;                   // div가 2부터 시작하므로

		while (1) {
			if (temp % div == 0) {  // 소수가 아닌 수는 증가하지 않고 나누어 떨어진다
				prime[div]++;
				temp /= div;
			}
			else
				div++;

			if (temp == 1)
				break;
		}
	}

	cout << n << "! = ";
	for (int i = 2; i <= n; i++)
		if (prime[i] != 0)             // 증가한 숫자는 모두 소수이기에 해당 수만 골라서 카운트 출력
			cout << prime[i] << " ";
}