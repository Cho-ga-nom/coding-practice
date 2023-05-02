/*
* 둘 중 더 큰 숫자를 낸 사람이 이기는 카드 게임
* 게임 횟수와 각 회에 무엇을 냈는지 입력
* 최종 점수를 비교하여 누가 이겼는지 판별
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int> a(10), b(10);
	int aScore = 0, bScore = 0;
	int last;

	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++) {
		cin >> b[i];
		
		if (i == 9) {
			if (a[i] > b[i])
				last = 1;
			else if (a[i] == b[i])
				last = 0;
			else
				last = -1;
		}

		if (a[i] > b[i])
			aScore += 3;
		else if (a[i] == b[i]) {
			aScore++;
			bScore++;
		}
		else
			bScore += 3;
	}

	cout << aScore << " " << bScore << endl;

	if (aScore == bScore) {
		if (last == 1)
			cout << "A";
		else if (last == 0)
			cout << "D";
		else if (last == -1)
			cout << "B";
	}
	else if (aScore > bScore) {
		cout << "A";
	}
	else
		cout << "B";
}