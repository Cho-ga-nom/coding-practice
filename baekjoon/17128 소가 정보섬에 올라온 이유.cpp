/*
* 백준 실버2 구현 문제
* 소가 정보섬에 올라온 이유
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int grade[200001];
int subTotal[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, temp = 1, sum = 0;
	cin >> n >> q;

	for (int i = 1; i <= n; i++)
		cin >> grade[i];

	vector<int> jokeNum(q);
	for (int i = 0; i < q; i++)
		cin >> jokeNum[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 4; j++) {
			if (i + j > n)
				temp *= grade[i + j - n];
			else
				temp *= grade[i + j];
		}
		sum += temp;
		subTotal[i] = temp;
		temp = 1;
	}

	int jokeIdx, abIdx;
	for (int i = 0; i < jokeNum.size(); i++) {
		jokeIdx = jokeNum[i];

		for (int j = jokeIdx - 3; j <= jokeIdx; j++) {
			if (j < 1) {
				abIdx = abs(j);
				sum -= subTotal[n - abIdx];
				subTotal[n - abIdx] *= -1;
				sum += subTotal[n - abIdx];
			}
			else {
				sum -= subTotal[j];
				subTotal[j] *= -1;
				sum += subTotal[j];
			}
		}
		cout << sum << "\n";
	}

	return 0;
}