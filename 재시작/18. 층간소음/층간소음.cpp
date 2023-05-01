/*
* n초 동안의 측정치와 임계값이 주어졌을 때
* 임계값을 넘는 측정치가 연속으로 최대 몇 번 나오는지 알아내기
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int time, thresh, maxCount = -1, count = 0;
	cin >> time >> thresh;
	vector<int> measure(time);

	for (int i = 0; i < time; i++) {
		cin >> measure[i];

		if (measure[i] > thresh) {
			if (++count > maxCount)
				maxCount = count;
		}
		else
			count = 0;
	}

	cout << maxCount;
}