/*
* Binary Search 응용
* 
* 자연수 곡의 개수, DVD 개수를 입력 받고 
* 곡의 길이를 분 단위로 입력 받는다.
* 
* 주어진 DVD 개수에 나눠담을 수 있는 DVD 최소 용량 출력.
* 
* 코드 이해 필요
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