/*
* 학생 수와 학생들의 키를 입력
* 학생은 본인 뒤에 앉은 본인보다 키가 작은 학생의 시야를 가린다
* 본인 뒤의 모든 학생의 시야를 가리는 학생 수 찾기
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int stdNum, count = 0;
	cin >> stdNum;
	vector<int> height(stdNum);
	bool isBig;                     // 모든 시야를 가리는 학생인지 판별하는 용도
	
	for (int i = 0; i < stdNum; i++)
		cin >> height[i];

	for (int i = 0; i < stdNum - 1; i++) {       // 첫번째 학생부터 반복
		isBig = true;

		for (int j = i + 1; j < stdNum; j++) {   // 현재 학생의 다음 학생부터 끝까지 반복하며 키 비교
			if (height[j] >= height[i]) {       // 현재 학생보다 키가 크거나 같은 학생이 있으면
				isBig = false;              // 시야를 가리지 않는다고 판별

				// 현재 학생보다 큰 학생 이전까지는 모두 키가 작은 것이기 때문에
				// 키가 더 큰 학생부터 다시 반복 시작
				i = j - 1;
				break;
			}
		}

		if (isBig)
			count++;
	}
	cout << count;
}