/*
* 백준 실버4 구현 문제
* 스위치 켜고 끄기
*/

#include <iostream>
using namespace std;

int main() {
	int switchNum, i, stdNum, gender, num;
	int sch[100];

	cin >> switchNum;
	for (i = 0; i < switchNum; i++)
		cin >> sch[i];

	cin >> stdNum;
	for (i = 0; i < stdNum; i++) {
		cin >> gender >> num;

		if (gender == 1) {          // 남학생인 경우
			for (int j = num; j <= switchNum; j += num) {
				if (sch[j - 1] == 0)
					sch[j - 1] = 1;
				else
					sch[j - 1] = 0;
			}
		}
		else {                     // 여학생인 경우
			int left = num - 1;
			int right = num - 1;

			while (left >= 0 && right < switchNum) {
				if (sch[left] != sch[right])
					break;

				left--;
				right++;
			}

			for (int k = left + 1; k <= right - 1; k++) {
				if (sch[k] == 0)
					sch[k] = 1;
				else
					sch[k] = 0;
			}
		}
	}

	for (i = 0; i < switchNum; i++) {
		cout << sch[i] << " ";
		
		if ((i + 1) % 20 == 0)
			cout << endl;
	}
}