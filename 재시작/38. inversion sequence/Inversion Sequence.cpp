/*
* Inversion Sequence
* 1부터 n까지의 수를 한 번씩만 사용하여 이루어진 수열이 있을 때
* 1부터 n까지 각각의 수 앞에 놓여 있는 자신보다 큰 수들의 개수를
* 수열로 표현한 것이 Inversion Sequence
* 
* 다음과 같은 수열이 있을 때
* 4 8 6 2 5 1 3 7
* 1 앞에 놓인 1보다 큰 수는 2, 8, 6, 2, 5 이렇게 5개
* 2 앞에 놓인 2보다 큰 수는 4, 8, 6 이렇게 3개이다.
* 따라서 Inversion Sequence는 5 3 4 0 ... 이 된다.
* 
* Inversion Sequence가 주어졌을 때
* 원래 수열을 출력
*/

#include <iostream>
using namespace std;

int main() {
	int n, i, j, pos;
	cin >> n;

	int* inversion = new int[n + 1];
	int* result = new int[n + 1];

	for (i = 1; i <= n; i++)
		cin >> inversion[i];

	for (i = n; i >= 1; i--) {
		pos = i;
		for (j = 1; j <= inversion[i]; j++) {
			result[pos] = result[pos + 1];
			pos++;
		}
		result[pos] = i;
	}

	for (i = 1; i <= n; i++)
		cout << result[i] << " ";

	delete[] inversion;
}