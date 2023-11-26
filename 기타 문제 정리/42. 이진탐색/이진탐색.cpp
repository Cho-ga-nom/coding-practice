/*
* 정렬되지 않은 N개의 숫자 입력
* N개의 수 중 하나인 M이 입력되면
* 숫자들이 정렬된 상태에서 M이 몇 번째에 있는지 출력
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main() {
	int n, m, mid;
	cin >> n >> m;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	int low = 0;
	int high = n;
	while (low <= high) {
		int mid = (low + high) / 2;

		if (vec[mid] == m) {
			cout << mid + 1;
			break;
		}
		else if (vec[mid] > m)
			high = mid - 1;
		else
			low = mid + 1;
	}
}