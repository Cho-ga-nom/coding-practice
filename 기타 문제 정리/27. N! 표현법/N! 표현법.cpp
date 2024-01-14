/*
* N!�� �־����� ��, �̸� �Ҽ��� ������ ǥ���϶�
* 5!�� 120�̹Ƿ�
* �Ҽ� 2, 3, 5, 7... ������
* 3 1 1 => 2 3��, 3 1��, 5 1���� ���� ����̴�.
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, temp, div;
	cin >> n;
	vector<int> prime(n);

	// 2���� n���� �ݺ��ϸ鼭
	// ���丮���� �̷�� �� ���ڰ� �Ҽ��� �� ���� ������ ������ ���������� ���
	// ���� ������ ���� ���� ī��Ʈ�� �ϳ��� ����
	for (int i = 2; i <= n; i++) {
		temp = i;
		div = 2;                   // div�� 2���� �����ϹǷ�

		while (1) {
			if (temp % div == 0) {  // �Ҽ��� �ƴ� ���� �������� �ʰ� ������ ��������
				prime[div]++;
				temp /= div;
			}
			else
				div++;

			if (temp == 1)
				break;
		}
	}

	cout << n << "! = ";
	for (int i = 2; i <= n; i++)
		if (prime[i] != 0)             // ������ ���ڴ� ��� �Ҽ��̱⿡ �ش� ���� ��� ī��Ʈ ���
			cout << prime[i] << " ";
}