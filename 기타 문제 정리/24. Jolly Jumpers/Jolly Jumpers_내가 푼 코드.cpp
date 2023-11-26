/*
* N개 정수로 이루어진 수열에 대해
* 서로 인접해 있는 두 수의 차가 1에서 N-1까지 값을 모두 가지는지 판별
* 
* 스스로 구현한 코드
* 답은 맞췄지만
* 반복문을 세 번이나 사용해서 지저분하고 비효율적이다
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void main() {
	int n, diff;
	cin >> n;
	vector<int> vec(n), diffVec(n - 1);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 1; i < n; i++) {
		diff = abs(vec[i] - vec[i - 1]);

		if (diff < 1 || diff >= n) {
			cout << "NO";
			exit(0);
		}

		diffVec[i - 1] = diff;
	}

	for (int i = 0; i <= diffVec.size() - i; i++) {
		if (diffVec[i] == diffVec[i + 1]) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";
}