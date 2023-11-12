#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct b {
	int num, idx;

	bool operator<(const b& elem) {
		if (this->num != elem.num) return this->num < elem.num;

		return this->idx < elem.idx;
	}
};

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;

	vector<b> arrB(N);
	int arrP[50];
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arrB[i] = { temp, i };
	}

	sort(arrB.begin(), arrB.end());
	for (int i = 0; i < N; i++) {
		arrP[arrB[i].idx] = i;
	}

	for (int i = 0; i < N; i++) {
		cout << arrP[i] << " ";
	}

	return 0;
}