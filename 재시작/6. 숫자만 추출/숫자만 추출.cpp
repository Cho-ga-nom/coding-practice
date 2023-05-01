/*
* 문자와 숫자가 섞인 문자열에서 숫자만 추출
* 숫자를 자연수로 만들고 그 약수의 개수 출력
*/

#include <iostream>
#include <string>
using namespace std;

void main() {
	string charStr, intStr;
	cin >> charStr;
	int i = 0;

	while (i < charStr.length()) {
		if (charStr[i] >= 48 && charStr[i] <= 57)
			intStr.push_back(charStr[i]);
		
		i++;
	}

	i = 1;
	int num = stoi(intStr);
	int count = 0;

	while (i <= num) {
		if ((num % i) == 0)
			count++;

		i++;
	}

	cout << num << endl;
	cout << count << endl;
}