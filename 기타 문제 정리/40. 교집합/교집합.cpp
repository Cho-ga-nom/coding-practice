/*
* ������(������Ʈ �˰���)
* 
* �� ���� A, B�� �־����� 
* �� ������ �������� �������� �����Ͽ� ���
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n1, n2, i, j;
	cin >> n1;

	int* arr1 = new int[n1];
	for (i = 0; i < n1; i++)
		cin >> arr1[i];

	cin >> n2;
	int* arr2 = new int[n2];
	vector<int> inter;

	for (i = 0; i < n2; i++) {
		cin >> arr2[i];
		for (j = 0; j < n1; j++) {
			if (arr1[j] == arr2[i]) {
				inter.push_back(arr2[i]);
				break;
			}
		}
	}

	sort(inter.begin(), inter.end());
	for (i = 0; i < inter.size(); i++)
		cout << inter[i] << " ";

	delete[] arr1, arr2;
}