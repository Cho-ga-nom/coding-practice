/*
* 1���� N������ �Ҽ��� ���� ���
* �����佺�׳׽��� ü
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int num, count = 0;
	cin >> num;

	int* arr = new int[num];             // �迭�� �����Ͽ� �ʱ�ȭ
	for (int i = 2; i <= num; i++)
		arr[i] = i;

	// 2���� �����Ͽ� Ư�� ���� ����� �ش��ϴ� ���� ��� �����.
	for (int i = 2; i <= num; i++) {
		if (arr[i] == 0) continue;      // �ڱ��ڽ��� ������ �ʰ�, �̹� ������ ���� �ǳʶڴ�.

		// ������ ���ڰ� �ƴ϶��, �� ������� ����Ͽ� ������ ��� ���� �����
		count++;
		for (int k = 2 * i; k <= num; k += i)
			arr[k] = 0;
	}

	cout << count;
	delete[] arr;
}