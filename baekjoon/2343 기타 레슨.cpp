#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;

	vector<int> times(N);
	for (int i = 0; i < N; i++) cin >> times[i];

	int left = *max_element(times.begin(), times.end()), right = 1000000000;
	int answer = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		int count = 1, temp = mid;

		for (int i = 0; i < N; i++) {
			if (temp - times[i] < 0) {
				count++;
				temp = mid - times[i];
			}
			else
				temp -= times[i];
		}

		if (count <= M) {
			answer = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}

	cout << answer;

	return 0;
}