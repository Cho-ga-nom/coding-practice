/*
* 두 문자열을 입력 받아 
* 둘이 아나그램 관계인지 아닌지 판별
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;

	// 알파벳 소문자와 대문자의 아스키코드 값을
	// 벡터 인덱스에 매핑
	vector<int> sum1(50), sum2(50);

	// 두 문자열에서 각각의 알파벳이 몇 번 사용되었는지 카운트
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 65 && str1[i] <= 90)
			sum1[str1[i] - 65]++;
	
		else if (str1[i] >= 97 && str1[i] <= 122)
			sum1[str1[i] - 73]++;

		if (str2[i] >= 65 && str2[i] <= 90)
			sum2[str2[i] - 65]++;
		else if (str2[i] >= 97 && str2[i] <= 122)
			sum2[str2[i] - 73]++;
	}
	
	// 두 문자열의 알파벳 종류, 사용 횟수가 하나라도 다르면 아나그램이 아님
	for (int i = 0; i < 50; i++) {
		if (sum1[i] != sum2[i]) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";
}