/*
* �������ķ� �������� ����
* �տ������� �̹� ���ĵ� �κа� ���Ͽ� �ڽ��� ��ġ�� ã�� ����
* �ڽź��� �տ� �ִ� ����� ���Ͽ� ��ġ�� ã�� ������ �� ĭ�� �ڷ� �ű� �� �����Ѵ�
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, temp;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] < vec[j]) {
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << vec[i] << " ";
}