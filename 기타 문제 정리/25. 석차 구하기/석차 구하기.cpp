/*
* N명의 수학점수가 입력되면
* 각 학생의 석차를 입력된 순서대로 출력
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n;
	cin >> n;
	vector<int> score(n), rank(n);

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		rank[i] = 1;                   // 점수를 입력할 때 기본 석차를 1로 초기화
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {    // 모든 학생을 서로 비교하여 석차 조절
			if (score[j] > score[i])
				rank[i]++;
		}
	}

	for (int i = 0; i < n; i++)
		cout << rank[i] << " ";
}