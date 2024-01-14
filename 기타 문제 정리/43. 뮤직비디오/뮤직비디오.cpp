/*
* Binary Search ����
* 
* �ڿ��� ���� ����, DVD ������ �Է� �ް� 
* ���� ���̸� �� ������ �Է� �޴´�.
* 
* �־��� DVD ������ �������� �� �ִ� DVD �ּ� �뷮 ���.
* 
* �ڵ� ���� �ʿ�
*/

#include <iostream>
using namespace std;

int a[1001], n;

int Count(int s) {
	int cnt = 1, sum = 0;

	for (int i = 1; i <= n; i++) {
		if (sum + a[i] > s) {
			cnt++;
			sum = a[i];
		}
		else
			sum += a[i];
	}

	return cnt;
}

int main() {
	int m, mid, res;
	int lt = 1, rt = 0, max = -2147000000;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		rt += a[i];
		
		if (a[i] > max) 
			max = a[i];
	}

	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (mid >= max && Count(mid) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else
			lt = mid + 1;
	}

	cout << res;
	return 0;
}