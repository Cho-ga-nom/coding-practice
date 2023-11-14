#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool Compare(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;

	vector<pair<int, int>> dots(N);
	for (int i = 0; i < N; i++) {
		int pos, color;
		cin >> pos >> color;

		dots[i].first = pos;
		dots[i].second = color;
	}

	sort(dots.begin(), dots.end(), Compare);
	int answer = 0;

	for (int i = 0; i < N; i++) {
		int distance = 100000;

		for (int j = 0; j < N; j++) {
			if (j == i)
				continue;

			if (dots[j].second == dots[i].second)
				distance = min(distance, abs(dots[j].first - dots[i].first));
		}

		answer += distance;
	}

	cout << answer;

	return 0;
}