/*
* �� �� �� ū ���ڸ� �� ����� �̱�� ī�� ����
* ���� Ƚ���� �� ȸ�� ������ �´��� �Է�
* ���� ������ ���Ͽ� ���� �̰���� �Ǻ�
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int> a(10), b(10);
	int aScore = 0, bScore = 0;
	int last;

	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++) {
		cin >> b[i];
		
		if (i == 9) {
			if (a[i] > b[i])
				last = 1;
			else if (a[i] == b[i])
				last = 0;
			else
				last = -1;
		}

		if (a[i] > b[i])
			aScore += 3;
		else if (a[i] == b[i]) {
			aScore++;
			bScore++;
		}
		else
			bScore += 3;
	}

	cout << aScore << " " << bScore << endl;

	if (aScore == bScore) {
		if (last == 1)
			cout << "A";
		else if (last == 0)
			cout << "D";
		else if (last == -1)
			cout << "B";
	}
	else if (aScore > bScore) {
		cout << "A";
	}
	else
		cout << "B";
}