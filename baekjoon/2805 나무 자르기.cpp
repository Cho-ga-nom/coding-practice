#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// 나무 M 미터 필요. H >= 0
// M 미터를 가져가기 위한 H의 최댓값

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	
	vector<int> heights(N);
	for (int i = 0; i < N; i++) cin >> heights[i];
	sort(heights.begin(), heights.end());

	int left = 0, right = 2000000000;
	int answer = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		long long sum = 0;

		for (int i = N - 1; i >= 0; i--) {
			if (heights[i] > mid)
				sum += heights[i] - mid;
		}

		if (sum >= M) {
			answer = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	cout << answer;

	return 0;
}