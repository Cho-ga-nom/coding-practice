/*
* 백준 실버3 구현 문제
* 파일 정리
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int fNum, i;
	cin >> fNum;
	
	string* fNames = new string[fNum];   // 파일 이름
	string* fExt = new string[fNum];     // 확장자
	for (i = 0; i < fNum; i++)
		cin >> fNames[i];

	int count = 1;
	int idx;
	
	// 확장자 분리해서 저장
	for (i = 0; i < fNum; i++) {
		idx = fNames[i].find(".") + 1;
		fExt[i] = fNames[i].substr(idx);
		
	}

	// 확장자 string 정렬
	sort(fExt, fExt + fNum);
	for (i = 1; i < fNum; i++) {
		if (fExt[i] != fExt[i - 1]) {
			cout << fExt[i - 1] << " " << count << endl;
			count = 1;
			continue;
		}

		count++;
	}

	cout << fExt[i - 1] << " " << count << endl;
}