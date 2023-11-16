#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, S;
	cin >> N >> S;

	vector<int> nums(N);
	for (int i = 0; i < N; i++) cin >> nums[i];

	int right = -1, sum = 0, answer = N + 1;
	for (int left = 0; left < N; left++) {
		if (left > 0)
			sum -= nums[left - 1];

		while (right + 1 < N && sum < S)
			sum += nums[++right];

		if (sum >= S)
			answer = min(answer, right - left + 1);
	}

	if (answer == N + 1)
		answer = 0;

	cout << answer;

	return 0;
}