/*
* �ڿ��� N�� �ԷµǸ� 1���� N���� �� ���ڵ���
* ����� ������ ����ϴ� ���α׷�
* �����佺�׳׽��� ü
*/

#include <iostream>
using namespace std;
int cnt[50001];

void main() {
	int num;
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		for (int j = i; j <= num; j += i)
			cnt[j]++;
	}

	for (int i = 1; i <= num; i++)
		cout << cnt[i] << " ";
}