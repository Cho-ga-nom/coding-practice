/*
* 온도 측정 기간과 각 날짜의 온도, 연속적인 며칠이 입력 되었을 때
* 입력 받은 연속적인 기간 동안 온도의 합이 최대가 되는 값 출력
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, k, max, temp = 0;
	cin >> n >> k;             // 전체 기간, 연속적인 기간 입력
	vector<int> deg(n);

	for (int i = 0; i < n; i++)
		cin >> deg[i];             // 각 일자 온도 입력

	for (int i = 0; i + k <= n; i++) {   // 현재 날짜에서 연속적인 기간을 더한 값이 전체 기간을 넘지 않을 때까지 반복
		for (int j = 0; j < k; j++) {    // 현재 인덱스에서 연속적인 기간 동안의 온도들을 더함
			temp += deg[i + j];
		}

		if (i == 0)
			max = temp;

		if (temp > max)      // 최대값과 비교
			max = temp;

		temp = 0;
	}

	cout << max;
}