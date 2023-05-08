/*
* N명의 선수와 각 선수의 실력이 주어졌을 때(숫자가 높을수록 실력이 좋음)
* 선수는 자신보다 실력이 낮은 선수를 앞지를 수 있다고 한다
* 경기가 끝났을 때, 각 선수의 최선의 등수를 입력한 순서와 동일한 순서로 출력한다
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, count = 0;
	cin >> n;
	vector<int> level(n), rank(n);
	for (int i = 0; i < n; i++)
		cin >> level[i];

	for (int i = n - 1; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			if (level[i] > level[j]) {
				count++;                // 앞지를 수 있는 사람의 수를 증가
			}
		}

		rank[i] = (i - count) + 1;     // 현재 등수에서 앞지른 사람 수만큼 뺌
		count = 0;
	}

	for (int i = 0; i < n; i++)
		cout << rank[i] << " ";
}