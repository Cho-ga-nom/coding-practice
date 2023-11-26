/*
* 두 배열 합치기
* 
* 오름차순으로 정렬된 두 배열이 주어지면
* 두 배열을 오름차순으로 합쳐 출력
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n1, n2, i;

	cin >> n1;
	int* arr1 = new int[n1];
	vector<int> v;
	vector<int>::iterator it;

	for (i = 0; i < n1; i++) {
		cin >> arr1[i];
		v.push_back(arr1[i]);
	}

	cin >> n2;
	int* arr2 = new int[n2];

	for (i = 0; i < n2; i++) {
		cin >> arr2[i];
		for (it = v.begin(); it != v.end(); it++) {
			if (arr2[i] <= *it) {
				v.insert(it, arr2[i]);
				break;
			}
		}

		if (it == v.end())
			v.push_back(arr2[i]);
	}

	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	delete[] arr1, arr2;
}