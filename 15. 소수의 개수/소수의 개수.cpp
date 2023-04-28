/*
* 1부터 N까지의 소수의 개수 출력
* 에라토스테네스의 체
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int num, count = 0;
	cin >> num;

	int* arr = new int[num];             // 배열을 생성하여 초기화
	for (int i = 2; i <= num; i++)
		arr[i] = i;

	// 2부터 시작하여 특정 수의 배수에 해당하는 수를 모두 지운다.
	for (int i = 2; i <= num; i++) {
		if (arr[i] == 0) continue;      // 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.

		// 지워진 숫자가 아니라면, 그 배수부터 출발하여 가능한 모든 숫자 지우기
		count++;
		for (int k = 2 * i; k <= num; k += i)
			arr[k] = 0;
	}

	cout << count;
	delete[] arr;
}