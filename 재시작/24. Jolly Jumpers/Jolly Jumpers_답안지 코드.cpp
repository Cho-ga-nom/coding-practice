/*
* ������� ���
* ���ڸ� �Է��� ���� ���� ��ҿ� ���̰��� ���ϰ�
* ���̰��� 1���� n-1 �����̸�, ���� vec�� �ߺ��Ǵ� ���� ���ٸ�
* �ش簪�� ������ �ִ´�.
* �ߺ��Ǵ� ���� �߰��ϸ� NO�� ����ϰ� ���α׷��� �����Ѵ�.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void main() {
	int n, now, pre, pos;
	cin >> n;
	vector<int> vec(n);
	cin >> pre;

	for (int i = 1; i < n; i++) {
		cin >> now;
		pos = abs(pre - now);

		if (pos > 0 && pos < n && vec[pos] == 0)
			vec[pos] = 1;
		else {
			cout << "NO";
			exit(0);
		}

		pre = now;
	}

	cout << "YES";
}