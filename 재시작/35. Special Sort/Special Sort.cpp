/*
* ������ ����� �̷���� ���� �ԷµǾ��� ��
* ������ �տ� ����� �ڷ� ���� �����Ѵ�
* ��, ������ ����� ������ ������ �ʾƾ� �Ѵ�
* 0�� �Էµ��� �ʴ´�
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n;
	cin >> n;
	vector<int> vec(n), minusNum, plusNum;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];

		if (vec[i] < 0)
			minusNum.push_back(vec[i]);
		else
			plusNum.push_back(vec[i]);
	}

	for (int i = 0; i < minusNum.size(); i++)
		cout << minusNum[i] << " ";

	for (int i = 0; i < plusNum.size(); i++)
		cout << plusNum[i] << " ";
}