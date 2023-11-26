/*
* 입력받은 자연수의 자릿수 중 가장 많이 사용된 숫자 출력
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main() {
	string num;
	cin >> num;

	vector<int> digitCount(10);    // 각각의 숫자가 사용된 횟수를 저장
	int i = 0;
	int digit, max= 0;

	while (i < num.size()) {
		digit = num[i] - 48;
		digitCount[digit]++;      // 반복하면서 현재 숫자의 사용 횟수 증가
		i++;
	}

	for (int i = 1; i < digitCount.size(); i++) {    // 카운트를 비교하여 가장 많이 사용된 숫자 탐색
		if (digitCount[i] >= digitCount[max])
			max = i;
	}

	cout << max;
}