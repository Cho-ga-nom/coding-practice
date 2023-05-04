/*
* 선택정렬로 오름차순 정렬
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n, temp, min;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (vec[min] > vec[j])
				min = j;
		}

		temp = vec[i];
		vec[i] = vec[min];
		vec[min] = temp;
	}
	
	for (int i = 0; i < n; i++)
		cout << vec[i] << " ";
}