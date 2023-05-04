/*
* n개의 숫자가 나열된 수열 입력
* 전체 수열 중 가장 길이가 긴 부분 증가 수열의 길이 출력
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, maxLen = 0, temp = 0;
	cin >> n;
	vector<int> seq(n + 1);
	for (int i = 0; i < n; i++)
		cin >> seq[i];

	for (int i = 0; i < n; i++) {
		if (seq[i + 1] >= seq[i])      // 다음 인덱스의 값이 현재보다 크면 증가 수열
			temp++;                    // 길이 증가
		else {                        // 증가하지 않으면 길이 증가를 멈춤
			if (temp > maxLen) {        // 최대 길이와 비교
				maxLen = temp + 1;
				temp = 0;              // 길이 초기화
			}
			else
				temp = 0;
		}
	}

	cout << maxLen;
}