/*
* ���� �ǹ�5 ���ڿ� ����
* 1543 ���� �˻�
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