/*
* ���ڿ� ���ڰ� ���� ���ڿ����� ���ڸ� ����
* ���ڸ� �ڿ����� ����� �� ����� ���� ���
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