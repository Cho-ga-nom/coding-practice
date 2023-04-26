/*
* N개의 자연수 중 각 자릿수의 합이 최대인 자연수를 찾아 출력
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int digit_sum(int x) {
	int sum = 0;
	int div1, div2;

	for (int i = 7; i > 0; i--) {
		div1 = x / pow(10, i);
		div2 = x / pow(10, i - 1);
		sum += div2 - (div1 * 10);
	}

	return sum;
}

void main() {
	int num;
	cin >> num;
	vector<int> arr(num);
	vector<int> sum(num);

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		sum[i] = digit_sum(arr[i]);
	}

	int max = sum[0];
	int maxIndex = 0;

	for (int i = 1; i < num; i++) {
		if (sum[i] > max) {
			max = sum[i];
			maxIndex = i;
		}

		if (sum[i] == max)
			maxIndex = arr[i] > arr[maxIndex] ? i : maxIndex;
	}

	cout << arr[maxIndex];
}