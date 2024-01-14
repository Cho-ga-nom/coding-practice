/*
* ���ĵ��� ���� N���� ���� �Է�
* N���� �� �� �ϳ��� M�� �ԷµǸ�
* ���ڵ��� ���ĵ� ���¿��� M�� �� ��°�� �ִ��� ���
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