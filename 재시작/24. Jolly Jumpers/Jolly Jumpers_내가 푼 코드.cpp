/*
* N�� ������ �̷���� ������ ����
* ���� ������ �ִ� �� ���� ���� 1���� N-1���� ���� ��� �������� �Ǻ�
* 
* ������ ������ �ڵ�
* ���� ��������
* �ݺ����� �� ���̳� ����ؼ� �������ϰ� ��ȿ�����̴�
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void main() {
	int n, diff;
	cin >> n;
	vector<int> vec(n), diffVec(n - 1);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 1; i < n; i++) {
		diff = abs(vec[i] - vec[i - 1]);

		if (diff < 1 || diff >= n) {
			cout << "NO";
			exit(0);
		}

		diffVec[i - 1] = diff;
	}

	for (int i = 0; i <= diffVec.size() - i; i++) {
		if (diffVec[i] == diffVec[i + 1]) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";
}