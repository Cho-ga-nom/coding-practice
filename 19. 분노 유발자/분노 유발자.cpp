/*
* �л� ���� �л����� Ű�� �Է�
* �л��� ���� �ڿ� ���� ���κ��� Ű�� ���� �л��� �þ߸� ������
* ���� ���� ��� �л��� �þ߸� ������ �л� �� ã��
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int stdNum, count = 0;
	cin >> stdNum;
	vector<int> height(stdNum);
	bool isBig;                     // ��� �þ߸� ������ �л����� �Ǻ��ϴ� �뵵
	
	for (int i = 0; i < stdNum; i++)
		cin >> height[i];

	for (int i = 0; i < stdNum - 1; i++) {       // ù��° �л����� �ݺ�
		isBig = true;

		for (int j = i + 1; j < stdNum; j++) {   // ���� �л��� ���� �л����� ������ �ݺ��ϸ� Ű ��
			if (height[j] >= height[i]) {       // ���� �л����� Ű�� ũ�ų� ���� �л��� ������
				isBig = false;              // �þ߸� ������ �ʴ´ٰ� �Ǻ�

				// ���� �л����� ū �л� ���������� ��� Ű�� ���� ���̱� ������
				// Ű�� �� ū �л����� �ٽ� �ݺ� ����
				i = j - 1;
				break;
			}
		}

		if (isBig)
			count++;
	}
	cout << count;
}