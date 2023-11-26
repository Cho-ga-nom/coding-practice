/*
* 버블정렬로 오름차순 정렬
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, temp;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (vec[j] > vec[j + 1]) {
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << vec[i] << " ";
}