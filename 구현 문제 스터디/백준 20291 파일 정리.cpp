/*
* ���� �ǹ�3 ���� ����
* ���� ����
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int fNum, i;
	cin >> fNum;
	
	string* fNames = new string[fNum];   // ���� �̸�
	string* fExt = new string[fNum];     // Ȯ����
	for (i = 0; i < fNum; i++)
		cin >> fNames[i];

	int count = 1;
	int idx;
	
	// Ȯ���� �и��ؼ� ����
	for (i = 0; i < fNum; i++) {
		idx = fNames[i].find(".", 3) + 1;
		fExt[i] = fNames[i].substr(idx);
		
	}

	// Ȯ���� string ����
	sort(fExt, fExt + fNum);
	for (i = 1; i < fNum; i++) {
		if (fExt[i] != fExt[i - 1]) {
			cout << fExt[i - 1] << " " << count << endl;
			count = 1;
			continue;
		}

		count++;
	}

	cout << fExt[i - 1] << " " << count << endl;
}