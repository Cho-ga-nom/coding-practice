/*
* ���� ��ȣ�� �ݴ� ��ȣ�� ������ ��ġ�ϴ��� �˻��ϴ� ����
*/

#include <iostream>
#include <string>
using namespace std;

void main() {
	string str;
	cin >> str;

	int count = 0;
	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '(')
			count++;
		else if (str[i] == ')')
			count--;

		if (count < 0) break;
	}

	if (count == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}