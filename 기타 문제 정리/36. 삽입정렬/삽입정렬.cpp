/*
* 삽입정렬로 오름차순 정렬
* 앞에서부터 이미 정렬된 부분과 비교하여 자신의 위치를 찾아 삽입
* 자신보다 앞에 있는 값들과 비교하여 위치를 찾고 값들을 한 칸씩 뒤로 옮긴 후 삽입한다
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

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] < vec[j]) {
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << vec[i] << " ";
}