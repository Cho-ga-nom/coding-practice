/*
* 잘못 입력된 영단어의 공백을 제거하고
* 소문자화 시켜 출력
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main() {
	string str, reStr;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			continue;
		
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;

		reStr.push_back(str[i]);
	}

	cout << reStr;
}