/*
* A�� B�� ������������ �� Ƚ���� ������ �´��� �Է�
* �� �������������� ��, ��, �� ���θ� �Ǻ��Ͽ� ���
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int totalGame, i = 0;
	cin >> totalGame;
	vector<int> a(totalGame), b(totalGame);

	while (i < totalGame) {
		cin >> a[i];
		i++;
	}

	i = 0;
	while (i < totalGame) {
		cin >> b[i];
		i++;
	}

	i = 0;
	while (i < totalGame) {
		if (a[i] == 1) {
			switch (b[i]) {
			case 1:
				cout << "D" << endl;
				break;
			case 2:
				cout << "B" << endl;
				break;
			case 3:
				cout << "A" << endl;
				break;
			}
		}
		else if (a[i] == 2) {
			switch (b[i]) {
			case 1:
				cout << "A" << endl;
				break;
			case 2:
				cout << "D" << endl;
				break;
			case 3:
				cout << "B" << endl;
				break;
			}
		}
		else if (a[i] == 3) {
			switch (b[i]) {
			case 1:
				cout << "B" << endl;
				break;
			case 2:
				cout << "A" << endl;
				break;
			case 3:
				cout << "D" << endl;
				break;
			}
		}

		i++;
	}
}