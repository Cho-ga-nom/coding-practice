/*
* �� ���ڿ��� �Է� �޾� 
* ���� �Ƴ��׷� �������� �ƴ��� �Ǻ�
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;

	// ���ĺ� �ҹ��ڿ� �빮���� �ƽ�Ű�ڵ� ����
	// ���� �ε����� ����
	vector<int> sum1(50), sum2(50);

	// �� ���ڿ����� ������ ���ĺ��� �� �� ���Ǿ����� ī��Ʈ
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
	
	// �� ���ڿ��� ���ĺ� ����, ��� Ƚ���� �ϳ��� �ٸ��� �Ƴ��׷��� �ƴ�
	for (int i = 0; i < 50; i++) {
		if (sum1[i] != sum2[i]) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";
}