/*
* N���� ������ �� ������ �Ƿ��� �־����� ��(���ڰ� �������� �Ƿ��� ����)
* ������ �ڽź��� �Ƿ��� ���� ������ ������ �� �ִٰ� �Ѵ�
* ��Ⱑ ������ ��, �� ������ �ּ��� ����� �Է��� ������ ������ ������ ����Ѵ�
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, count = 0;
	cin >> n;
	vector<int> level(n), rank(n);
	for (int i = 0; i < n; i++)
		cin >> level[i];

	for (int i = n - 1; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			if (level[i] > level[j]) {
				count++;                // ������ �� �ִ� ����� ���� ����
			}
		}

		rank[i] = (i - count) + 1;     // ���� ������� ������ ��� ����ŭ ��
		count = 0;
	}

	for (int i = 0; i < n; i++)
		cout << rank[i] << " ";
}