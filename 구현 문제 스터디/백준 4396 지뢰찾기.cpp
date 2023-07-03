/*
* ���� �ǹ�4 ���� ����
* ���� ã��
*/

#include <iostream>
using namespace std;

char mines[11][11];
char clicked[11][11];
char result[11][11];
int x[8] = { 0, 0, -1, 1, -1, -1, 1, 1 };   //��, ��, ��, ��, ���� ��, ���� �Ʒ�, ������ ��, ������ �Ʒ�
int y[8] = { -1, 1, 0, 0, -1, 1, -1, 1 };

int main() {
	int n, i, j;
	bool isFail = false;
	int count = 0;
	cin >> n;

	// ���� ���� �Է�
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> mines[i][j];
			result[i][j] = '.';
		}
	}

	// Ŭ���� ��ġ �Է�
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> clicked[i][j];

			// ���ڰ� �ִ� ���� Ŭ���� ���
			if (clicked[i][j] == 'x' && mines[i][j] == '*') {
				isFail = true;
			}
			else if (clicked[i][j] == 'x' && mines[i][j] == '.') {
				for (int k = 0; k < 8; k++) {                        // 8���� ���⿡ ���ڰ� �ִ��� �˻�
					int tempX = i + x[k];
					int tempY = j + y[k];

					if (tempX >= 0 && tempX < n && tempY >= 0 && tempY < n) {   // �迭 ũ�⸦ ���� �ʴ� �������� �˻�
						if (mines[tempX][tempY] == '*')                        // ���ڰ� �ִٸ� ī��Ʈ ����
							count++;
					}
				}

				result[i][j] = count + '0';
				count = 0;
			}
		}
	}

	if (isFail) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	else {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << result[i][j];
			}
			cout << endl;
		}
	}
}