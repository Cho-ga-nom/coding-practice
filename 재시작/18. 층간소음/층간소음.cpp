/*
* n�� ������ ����ġ�� �Ӱ谪�� �־����� ��
* �Ӱ谪�� �Ѵ� ����ġ�� �������� �ִ� �� �� �������� �˾Ƴ���
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int time, thresh, maxCount = -1, count = 0;
	cin >> time >> thresh;
	vector<int> measure(time);

	for (int i = 0; i < time; i++) {
		cin >> measure[i];

		if (measure[i] > thresh) {
			if (++count > maxCount)
				maxCount = count;
		}
		else
			count = 0;
	}

	cout << maxCount;
}