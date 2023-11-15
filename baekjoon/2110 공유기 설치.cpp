#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, C;
	cin >> N >> C;

	vector<int> pos(N);
	for (int i = 0; i < N; i++) cin >> pos[i];
	sort(pos.begin(), pos.end());

	int left = 1, right = 1000000000;
	int answer = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		int count = 1, last = pos[0];

		for (int i = 1; i < N; i++) {
			if (pos[i] - last < mid)
				continue;

			last = pos[i];
			count++;
		}

		if (count >= C) {
			answer = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	cout << answer;

	return 0;
}