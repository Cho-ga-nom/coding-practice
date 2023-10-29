/*
* 백준 실버5 문자열 문제
* 1543 문서 검색
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string docu;
	string word;

	getline(cin, docu);
	getline(cin, word);

	int count = 0;
	for (int i = 0; i < docu.length(); i++) {
		string temp = docu.substr(i, word.length());
		
		if (word.compare(temp) == 0) {
			count++;
			i += word.length() - 1;
		}
	}

	cout << count;
	return 0;
}