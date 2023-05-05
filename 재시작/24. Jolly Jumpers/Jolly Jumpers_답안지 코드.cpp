/*
* 답안지의 방법
* 숫자를 입력한 직후 이전 요소와 차이값을 구하고
* 차이값이 1부터 n-1 사이이며, 현재 vec에 중복되는 값이 없다면
* 해당값을 수열에 넣는다.
* 중복되는 값을 발견하면 NO를 출력하고 프로그램을 종료한다.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void main() {
	int n, now, pre, pos;
	cin >> n;
	vector<int> vec(n);
	cin >> pre;

	for (int i = 1; i < n; i++) {
		cin >> now;
		pos = abs(pre - now);

		if (pos > 0 && pos < n && vec[pos] == 0)
			vec[pos] = 1;
		else {
			cout << "NO";
			exit(0);
		}

		pre = now;
	}

	cout << "YES";
}